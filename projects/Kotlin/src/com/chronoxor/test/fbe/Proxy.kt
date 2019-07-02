// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.3.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test.fbe

// Fast Binary Encoding com.chronoxor.test proxy
@Suppress("MemberVisibilityCanBePrivate", "PrivatePropertyName", "UNUSED_PARAMETER")
open class Proxy : com.chronoxor.fbe.Receiver, ProxyListener
{
    // Imported proxy
    var protoProxy: com.chronoxor.proto.fbe.Proxy? = null

    // Proxy models accessors
    private val StructSimpleModel: StructSimpleModel
    private val StructOptionalModel: StructOptionalModel
    private val StructNestedModel: StructNestedModel
    private val StructBytesModel: StructBytesModel
    private val StructArrayModel: StructArrayModel
    private val StructVectorModel: StructVectorModel
    private val StructListModel: StructListModel
    private val StructSetModel: StructSetModel
    private val StructMapModel: StructMapModel
    private val StructHashModel: StructHashModel
    private val StructHashExModel: StructHashExModel
    private val StructEmptyModel: StructEmptyModel

    constructor() : super(false)
    {
        protoProxy = com.chronoxor.proto.fbe.Proxy(buffer)
        StructSimpleModel = StructSimpleModel()
        StructOptionalModel = StructOptionalModel()
        StructNestedModel = StructNestedModel()
        StructBytesModel = StructBytesModel()
        StructArrayModel = StructArrayModel()
        StructVectorModel = StructVectorModel()
        StructListModel = StructListModel()
        StructSetModel = StructSetModel()
        StructMapModel = StructMapModel()
        StructHashModel = StructHashModel()
        StructHashExModel = StructHashExModel()
        StructEmptyModel = StructEmptyModel()
    }

    constructor(buffer: com.chronoxor.fbe.Buffer) : super(buffer, false)
    {
        protoProxy = com.chronoxor.proto.fbe.Proxy(buffer)
        StructSimpleModel = StructSimpleModel()
        StructOptionalModel = StructOptionalModel()
        StructNestedModel = StructNestedModel()
        StructBytesModel = StructBytesModel()
        StructArrayModel = StructArrayModel()
        StructVectorModel = StructVectorModel()
        StructListModel = StructListModel()
        StructSetModel = StructSetModel()
        StructMapModel = StructMapModel()
        StructHashModel = StructHashModel()
        StructHashExModel = StructHashExModel()
        StructEmptyModel = StructEmptyModel()
    }

    override fun onReceive(type: Long, buffer: ByteArray, offset: Long, size: Long): Boolean
    {
        return onReceiveListener(this, type, buffer, offset, size)
    }

    open fun onReceiveListener(listener: ProxyListener, type: Long, buffer: ByteArray, offset: Long, size: Long): Boolean
    {
        when (type)
        {
            com.chronoxor.test.fbe.StructSimpleModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructSimpleModel.attach(buffer, offset)
                assert(StructSimpleModel.verify()) { "com.chronoxor.test.StructSimple validation failed!" }

                val fbeBegin = StructSimpleModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructSimpleModel, type, buffer, offset, size)
                StructSimpleModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructOptionalModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructOptionalModel.attach(buffer, offset)
                assert(StructOptionalModel.verify()) { "com.chronoxor.test.StructOptional validation failed!" }

                val fbeBegin = StructOptionalModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructOptionalModel, type, buffer, offset, size)
                StructOptionalModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructNestedModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructNestedModel.attach(buffer, offset)
                assert(StructNestedModel.verify()) { "com.chronoxor.test.StructNested validation failed!" }

                val fbeBegin = StructNestedModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructNestedModel, type, buffer, offset, size)
                StructNestedModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructBytesModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructBytesModel.attach(buffer, offset)
                assert(StructBytesModel.verify()) { "com.chronoxor.test.StructBytes validation failed!" }

                val fbeBegin = StructBytesModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructBytesModel, type, buffer, offset, size)
                StructBytesModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructArrayModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructArrayModel.attach(buffer, offset)
                assert(StructArrayModel.verify()) { "com.chronoxor.test.StructArray validation failed!" }

                val fbeBegin = StructArrayModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructArrayModel, type, buffer, offset, size)
                StructArrayModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructVectorModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructVectorModel.attach(buffer, offset)
                assert(StructVectorModel.verify()) { "com.chronoxor.test.StructVector validation failed!" }

                val fbeBegin = StructVectorModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructVectorModel, type, buffer, offset, size)
                StructVectorModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructListModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructListModel.attach(buffer, offset)
                assert(StructListModel.verify()) { "com.chronoxor.test.StructList validation failed!" }

                val fbeBegin = StructListModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructListModel, type, buffer, offset, size)
                StructListModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructSetModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructSetModel.attach(buffer, offset)
                assert(StructSetModel.verify()) { "com.chronoxor.test.StructSet validation failed!" }

                val fbeBegin = StructSetModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructSetModel, type, buffer, offset, size)
                StructSetModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructMapModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructMapModel.attach(buffer, offset)
                assert(StructMapModel.verify()) { "com.chronoxor.test.StructMap validation failed!" }

                val fbeBegin = StructMapModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructMapModel, type, buffer, offset, size)
                StructMapModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructHashModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructHashModel.attach(buffer, offset)
                assert(StructHashModel.verify()) { "com.chronoxor.test.StructHash validation failed!" }

                val fbeBegin = StructHashModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructHashModel, type, buffer, offset, size)
                StructHashModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructHashExModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructHashExModel.attach(buffer, offset)
                assert(StructHashExModel.verify()) { "com.chronoxor.test.StructHashEx validation failed!" }

                val fbeBegin = StructHashExModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructHashExModel, type, buffer, offset, size)
                StructHashExModel.model.getEnd(fbeBegin)
                return true
            }
            com.chronoxor.test.fbe.StructEmptyModel.fbeTypeConst ->
            {
                // Attach the FBE stream to the proxy model
                StructEmptyModel.attach(buffer, offset)
                assert(StructEmptyModel.verify()) { "com.chronoxor.test.StructEmpty validation failed!" }

                val fbeBegin = StructEmptyModel.model.getBegin()
                if (fbeBegin == 0L)
                    return false
                // Call proxy handler
                listener.onProxy(StructEmptyModel, type, buffer, offset, size)
                StructEmptyModel.model.getEnd(fbeBegin)
                return true
            }
        }

        if ((protoProxy != null) && protoProxy!!.onReceiveListener(listener, type, buffer, offset, size))
            return true

        return false
    }
}