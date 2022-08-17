//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.proto.fbe

// Fast Binary Encoding Order final model
@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods", "ReplaceGetOrSet")
class FinalModelOrder(buffer: com.chronoxor.fbe.Buffer, offset: Long) : com.chronoxor.fbe.FinalModel(buffer, offset)
{
    val id: com.chronoxor.fbe.FinalModelInt32 = com.chronoxor.fbe.FinalModelInt32(buffer, 0)
    val symbol: com.chronoxor.fbe.FinalModelString = com.chronoxor.fbe.FinalModelString(buffer, 0)
    val side: FinalModelOrderSide = FinalModelOrderSide(buffer, 0)
    val type: FinalModelOrderType = FinalModelOrderType(buffer, 0)
    val price: com.chronoxor.fbe.FinalModelDouble = com.chronoxor.fbe.FinalModelDouble(buffer, 0)
    val volume: com.chronoxor.fbe.FinalModelDouble = com.chronoxor.fbe.FinalModelDouble(buffer, 0)

    // Get the allocation size
    @Suppress("UNUSED_PARAMETER")
    fun fbeAllocationSize(fbeValue: com.chronoxor.proto.Order): Long = (0
        + id.fbeAllocationSize(fbeValue.id)
        + symbol.fbeAllocationSize(fbeValue.symbol)
        + side.fbeAllocationSize(fbeValue.side)
        + type.fbeAllocationSize(fbeValue.type)
        + price.fbeAllocationSize(fbeValue.price)
        + volume.fbeAllocationSize(fbeValue.volume)
        )

    // Field type
    var fbeType: Long = fbeTypeConst

    companion object
    {
        const val fbeTypeConst: Long = 1
    }

    // Check if the struct value is valid
    override fun verify(): Long
    {
        _buffer.shift(fbeOffset)
        val fbeResult = verifyFields()
        _buffer.unshift(fbeOffset)
        return fbeResult
    }

    // Check if the struct fields are valid
    fun verifyFields(): Long
    {
        var fbeCurrentOffset = 0L
        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER")
        var fbeFieldSize = 0L

        id.fbeOffset = fbeCurrentOffset
        fbeFieldSize = id.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        symbol.fbeOffset = fbeCurrentOffset
        fbeFieldSize = symbol.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        side.fbeOffset = fbeCurrentOffset
        fbeFieldSize = side.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        type.fbeOffset = fbeCurrentOffset
        fbeFieldSize = type.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        price.fbeOffset = fbeCurrentOffset
        fbeFieldSize = price.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        volume.fbeOffset = fbeCurrentOffset
        fbeFieldSize = volume.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        return fbeCurrentOffset
    }

    // Get the struct value
    fun get(fbeSize: com.chronoxor.fbe.Size, fbeValue: com.chronoxor.proto.Order = com.chronoxor.proto.Order()): com.chronoxor.proto.Order
    {
        _buffer.shift(fbeOffset)
        fbeSize.value = getFields(fbeValue)
        _buffer.unshift(fbeOffset)
        return fbeValue
    }

    // Get the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun getFields(fbeValue: com.chronoxor.proto.Order): Long
    {
        var fbeCurrentOffset = 0L
        var fbeCurrentSize = 0L
        val fbeFieldSize = com.chronoxor.fbe.Size()

        id.fbeOffset = fbeCurrentOffset
        fbeValue.id = id.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        symbol.fbeOffset = fbeCurrentOffset
        fbeValue.symbol = symbol.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        side.fbeOffset = fbeCurrentOffset
        fbeValue.side = side.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        type.fbeOffset = fbeCurrentOffset
        fbeValue.type = type.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        price.fbeOffset = fbeCurrentOffset
        fbeValue.price = price.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        volume.fbeOffset = fbeCurrentOffset
        fbeValue.volume = volume.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        return fbeCurrentSize
    }

    // Set the struct value
    fun set(fbeValue: com.chronoxor.proto.Order): Long
    {
        _buffer.shift(fbeOffset)
        val fbeSize = setFields(fbeValue)
        _buffer.unshift(fbeOffset)
        return fbeSize
    }

    // Set the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun setFields(fbeValue: com.chronoxor.proto.Order): Long
    {
        var fbeCurrentOffset = 0L
        var fbeCurrentSize = 0L
        val fbeFieldSize = com.chronoxor.fbe.Size()

        id.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = id.set(fbeValue.id)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        symbol.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = symbol.set(fbeValue.symbol)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        side.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = side.set(fbeValue.side)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        type.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = type.set(fbeValue.type)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        price.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = price.set(fbeValue.price)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        volume.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = volume.set(fbeValue.volume)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        return fbeCurrentSize
    }
}
