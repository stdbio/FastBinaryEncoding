//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.fbe

// Fast Binary Encoding decimal final model
class FinalModelDecimal(buffer: Buffer, offset: Long) : FinalModel(buffer, offset)
{
    // Get the allocation size
    @Suppress("UNUSED_PARAMETER")
    fun fbeAllocationSize(value: java.math.BigDecimal): Long = fbeSize

    // Final size
    override val fbeSize: Long = 16

    // Check if the decimal value is valid
    override fun verify(): Long
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return Long.MAX_VALUE

        return fbeSize
    }

    // Get the decimal value
    fun get(size: Size): java.math.BigDecimal
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return java.math.BigDecimal.valueOf(0L)

        val magnitude = readBytes(fbeOffset, 12)
        val scale = readByte(fbeOffset + 14).toInt()
        val signum = if (readByte(fbeOffset + 15) < 0) -1 else 1

        // Reverse magnitude
        for (i in 0 until (magnitude.size / 2))
        {
            val temp = magnitude[i]
            magnitude[i] = magnitude[magnitude.size - i - 1]
            magnitude[magnitude.size - i - 1] = temp
        }

        val unscaled = java.math.BigInteger(signum, magnitude)

        size.value = fbeSize
        return java.math.BigDecimal(unscaled, scale)
    }

    // Set the decimal value
    fun set(value: java.math.BigDecimal): Long
    {
        assert((_buffer.offset + fbeOffset + fbeSize) <= _buffer.size) { "Model is broken!" }
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        // Get unscaled absolute value
        val unscaled = value.abs().unscaledValue()
        val bitLength = unscaled.bitLength()
        if ((bitLength < 0) || (bitLength > 96))
        {
            // Value too big for .NET Decimal (bit length is limited to [0, 96])
            write(fbeOffset, 0.toByte(), fbeSize)
            return fbeSize
        }

        // Get byte array
        val unscaledBytes = unscaled.toByteArray()

        // Get scale
        val scale = value.scale()
        if ((scale < 0) || (scale > 28))
        {
            // Value scale exceeds .NET Decimal limit of [0, 28]
            write(fbeOffset, 0.toByte(), fbeSize)
            return fbeSize
        }

        // Write unscaled value to bytes 0-11
        var index = 0
        var i = unscaledBytes.size - 1
        while ((i >= 0) && (index < 12))
        {
            write(fbeOffset + index, unscaledBytes[i])
            i--
            index++
        }

        // Fill remaining bytes with zeros
        while (index < 14)
        {
            write(fbeOffset + index, 0.toByte())
            index++
        }

        // Write scale at byte 14
        write(fbeOffset + 14, scale.toByte())

        // Write signum at byte 15
        write(fbeOffset + 15, (if (value.signum() < 0) -128 else 0).toByte())
        return fbeSize
    }
}
