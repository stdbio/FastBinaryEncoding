//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.protoex.fbe

// Fast Binary Encoding com.chronoxor.protoex final sender
@Suppress("MemberVisibilityCanBePrivate", "PropertyName")
open class FinalSender : com.chronoxor.fbe.Sender, IFinalSenderListener
{
    // Imported senders
    val protoSender: com.chronoxor.proto.fbe.FinalSender

    // Sender models accessors
    val OrderMessageModel: OrderMessageFinalModel
    val BalanceMessageModel: BalanceMessageFinalModel
    val AccountMessageModel: AccountMessageFinalModel

    constructor() : super(true)
    {
        protoSender = com.chronoxor.proto.fbe.FinalSender(buffer)
        OrderMessageModel = OrderMessageFinalModel(buffer)
        BalanceMessageModel = BalanceMessageFinalModel(buffer)
        AccountMessageModel = AccountMessageFinalModel(buffer)
    }

    constructor(buffer: com.chronoxor.fbe.Buffer) : super(buffer, true)
    {
        protoSender = com.chronoxor.proto.fbe.FinalSender(buffer)
        OrderMessageModel = OrderMessageFinalModel(buffer)
        BalanceMessageModel = BalanceMessageFinalModel(buffer)
        AccountMessageModel = AccountMessageFinalModel(buffer)
    }

    fun send(obj: Any): Long
    {
        return sendListener(this, obj)
    }

    @Suppress("JoinDeclarationAndAssignment", "UNUSED_PARAMETER")
    fun sendListener(listener: IFinalSenderListener, obj: Any): Long
    {
        when (obj)
        {
            is com.chronoxor.protoex.OrderMessage -> if (obj.fbeType == OrderMessageModel.fbeType) return sendListener(listener, obj)
            is com.chronoxor.protoex.BalanceMessage -> if (obj.fbeType == BalanceMessageModel.fbeType) return sendListener(listener, obj)
            is com.chronoxor.protoex.AccountMessage -> if (obj.fbeType == AccountMessageModel.fbeType) return sendListener(listener, obj)
        }

        // Try to send using imported senders
        @Suppress("CanBeVal")
        var result: Long
        result = protoSender.sendListener(listener, obj)
        if (result > 0)
            return result

        return 0
    }

    fun send(value: com.chronoxor.protoex.OrderMessage): Long
    {
        return sendListener(this, value)
    }

    fun sendListener(listener: IFinalSenderListener, value: com.chronoxor.protoex.OrderMessage): Long
    {
        // Serialize the value into the FBE stream
        val serialized = OrderMessageModel.serialize(value)
        assert(serialized > 0) { "com.chronoxor.protoex.OrderMessage serialization failed!" }
        assert(OrderMessageModel.verify()) { "com.chronoxor.protoex.OrderMessage validation failed!" }

        // Log the value
        if (logging)
        {
            val message = value.toString()
            listener.onSendLog(message)
        }

        // Send the serialized value
        return sendSerialized(listener, serialized)
    }
    fun send(value: com.chronoxor.protoex.BalanceMessage): Long
    {
        return sendListener(this, value)
    }

    fun sendListener(listener: IFinalSenderListener, value: com.chronoxor.protoex.BalanceMessage): Long
    {
        // Serialize the value into the FBE stream
        val serialized = BalanceMessageModel.serialize(value)
        assert(serialized > 0) { "com.chronoxor.protoex.BalanceMessage serialization failed!" }
        assert(BalanceMessageModel.verify()) { "com.chronoxor.protoex.BalanceMessage validation failed!" }

        // Log the value
        if (logging)
        {
            val message = value.toString()
            listener.onSendLog(message)
        }

        // Send the serialized value
        return sendSerialized(listener, serialized)
    }
    fun send(value: com.chronoxor.protoex.AccountMessage): Long
    {
        return sendListener(this, value)
    }

    fun sendListener(listener: IFinalSenderListener, value: com.chronoxor.protoex.AccountMessage): Long
    {
        // Serialize the value into the FBE stream
        val serialized = AccountMessageModel.serialize(value)
        assert(serialized > 0) { "com.chronoxor.protoex.AccountMessage serialization failed!" }
        assert(AccountMessageModel.verify()) { "com.chronoxor.protoex.AccountMessage validation failed!" }

        // Log the value
        if (logging)
        {
            val message = value.toString()
            listener.onSendLog(message)
        }

        // Send the serialized value
        return sendSerialized(listener, serialized)
    }
}
