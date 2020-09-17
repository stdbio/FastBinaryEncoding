// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.4.0.0

import Foundation
import ChronoxorFbe
import ChronoxorProto

// Fast Binary Encoding Protoex client
open class Client: ChronoxorFbe.ClientProtocol {
    // Imported clients
    let ProtoClient: ChronoxorProto.Client

    // Client sender models accessors
    let OrderMessageSenderModel: OrderMessageModel
    let BalanceMessageSenderModel: BalanceMessageModel
    let AccountMessageSenderModel: AccountMessageModel

    // Client receiver values accessors
    private var OrderMessageReceiverValue: ChronoxorProtoex.OrderMessage
    private var BalanceMessageReceiverValue: ChronoxorProtoex.BalanceMessage
    private var AccountMessageReceiverValue: ChronoxorProtoex.AccountMessage

    // Client receiver models accessors
    private let OrderMessageReceiverModel: OrderMessageModel
    private let BalanceMessageReceiverModel: BalanceMessageModel
    private let AccountMessageReceiverModel: AccountMessageModel

    public var sendBuffer: Buffer = Buffer()
    public var receiveBuffer: Buffer = Buffer()
    public var final: Bool = false

    public init() {
        ProtoClient = ChronoxorProto.Client(sendBuffer: sendBuffer, receiveBuffer: receiveBuffer)
        OrderMessageSenderModel = OrderMessageModel(buffer: sendBuffer)
        OrderMessageReceiverValue = ChronoxorProtoex.OrderMessage()
        OrderMessageReceiverModel = OrderMessageModel()
        BalanceMessageSenderModel = BalanceMessageModel(buffer: sendBuffer)
        BalanceMessageReceiverValue = ChronoxorProtoex.BalanceMessage()
        BalanceMessageReceiverModel = BalanceMessageModel()
        AccountMessageSenderModel = AccountMessageModel(buffer: sendBuffer)
        AccountMessageReceiverValue = ChronoxorProtoex.AccountMessage()
        AccountMessageReceiverModel = AccountMessageModel()
        build(with: false)
    }

    public init(sendBuffer: ChronoxorFbe.Buffer, receiveBuffer: ChronoxorFbe.Buffer) {
        ProtoClient = ChronoxorProto.Client(sendBuffer: sendBuffer, receiveBuffer: receiveBuffer)
        OrderMessageSenderModel = OrderMessageModel(buffer: sendBuffer)
        OrderMessageReceiverValue = ChronoxorProtoex.OrderMessage()
        OrderMessageReceiverModel = OrderMessageModel()
        BalanceMessageSenderModel = BalanceMessageModel(buffer: sendBuffer)
        BalanceMessageReceiverValue = ChronoxorProtoex.BalanceMessage()
        BalanceMessageReceiverModel = BalanceMessageModel()
        AccountMessageSenderModel = AccountMessageModel(buffer: sendBuffer)
        AccountMessageReceiverValue = ChronoxorProtoex.AccountMessage()
        AccountMessageReceiverModel = AccountMessageModel()
        build(with: sendBuffer, receiveBuffer: receiveBuffer, final: false)
    }

    public func send(obj: Any) throws -> Int {
        guard let listener = self as? ChronoxorFbe.SenderListener else { return 0 }
        return try send(obj: obj, listener: listener)
    }

    public func send(obj: Any, listener: ChronoxorFbe.SenderListener) throws -> Int {
        let objType = type(of: obj)
        if objType == ChronoxorProtoex.OrderMessage.self, let value = obj as? ChronoxorProtoex.OrderMessage { return try send(value: value, listener: listener) }
        if objType == ChronoxorProtoex.BalanceMessage.self, let value = obj as? ChronoxorProtoex.BalanceMessage { return try send(value: value, listener: listener) }
        if objType == ChronoxorProtoex.AccountMessage.self, let value = obj as? ChronoxorProtoex.AccountMessage { return try send(value: value, listener: listener) }

        // Try to send using imported clients
        var result: Int = 0
        result = try ProtoClient.send(obj: obj, listener: listener)
        if result > 0 { return result }

        return 0
    }

    public func send(value: ChronoxorProtoex.OrderMessage) throws -> Int {
        guard let listener = self as? ChronoxorFbe.SenderListener else { return 0 }
        return try send(value: value, listener: listener)
    }

    public func send(value: ChronoxorProtoex.OrderMessage, listener: ChronoxorFbe.SenderListener) throws -> Int {
        // Serialize the value into the FBE stream
        let serialized = try OrderMessageSenderModel.serialize(value: value)
        assert(serialized > 0, "ChronoxorProtoex.OrderMessage serialization failed!")
        assert(OrderMessageSenderModel.verify(), "ChronoxorProtoex.OrderMessage validation failed!")

        // Log the value
        if listener.logging {
            let message = value.description
            listener.onSendLog(message: message)
        }

        // Send the serialized value
        return try sendSerialized(listener: listener, serialized: serialized)
    }

    public func send(value: ChronoxorProtoex.BalanceMessage) throws -> Int {
        guard let listener = self as? ChronoxorFbe.SenderListener else { return 0 }
        return try send(value: value, listener: listener)
    }

    public func send(value: ChronoxorProtoex.BalanceMessage, listener: ChronoxorFbe.SenderListener) throws -> Int {
        // Serialize the value into the FBE stream
        let serialized = try BalanceMessageSenderModel.serialize(value: value)
        assert(serialized > 0, "ChronoxorProtoex.BalanceMessage serialization failed!")
        assert(BalanceMessageSenderModel.verify(), "ChronoxorProtoex.BalanceMessage validation failed!")

        // Log the value
        if listener.logging {
            let message = value.description
            listener.onSendLog(message: message)
        }

        // Send the serialized value
        return try sendSerialized(listener: listener, serialized: serialized)
    }

    public func send(value: ChronoxorProtoex.AccountMessage) throws -> Int {
        guard let listener = self as? ChronoxorFbe.SenderListener else { return 0 }
        return try send(value: value, listener: listener)
    }

    public func send(value: ChronoxorProtoex.AccountMessage, listener: ChronoxorFbe.SenderListener) throws -> Int {
        // Serialize the value into the FBE stream
        let serialized = try AccountMessageSenderModel.serialize(value: value)
        assert(serialized > 0, "ChronoxorProtoex.AccountMessage serialization failed!")
        assert(AccountMessageSenderModel.verify(), "ChronoxorProtoex.AccountMessage validation failed!")

        // Log the value
        if listener.logging {
            let message = value.description
            listener.onSendLog(message: message)
        }

        // Send the serialized value
        return try sendSerialized(listener: listener, serialized: serialized)
    }
    open func onReceive(type: Int, buffer: Data, offset: Int, size: Int) -> Bool {
        guard let listener = self as? ReceiverListener else { return false }
        return onReceiveListener(listener: listener, type: type, buffer: buffer, offset: offset, size: size)
    }

    open func onReceiveListener(listener: ReceiverListener, type: Int, buffer: Data, offset: Int, size: Int) -> Bool {
        switch type {
        case ChronoxorProtoex.OrderMessageModel.fbeTypeConst:
            // Deserialize the value from the FBE stream
            OrderMessageReceiverModel.attach(buffer: buffer, offset: offset)
            assert(OrderMessageReceiverModel.verify(), "Protoex.OrderMessage validation failed!")
            let deserialized = OrderMessageReceiverModel.deserialize(value: &OrderMessageReceiverValue)
            assert(deserialized > 0, "Protoex.OrderMessage deserialization failed!")

            // Log the value
            if listener.logging {
                let message = OrderMessageReceiverValue.description
                listener.onReceiveLog(message: message)
            }

            // Call receive handler with deserialized value
            listener.onReceive(value: OrderMessageReceiverValue)
            return true
        case ChronoxorProtoex.BalanceMessageModel.fbeTypeConst:
            // Deserialize the value from the FBE stream
            BalanceMessageReceiverModel.attach(buffer: buffer, offset: offset)
            assert(BalanceMessageReceiverModel.verify(), "Protoex.BalanceMessage validation failed!")
            let deserialized = BalanceMessageReceiverModel.deserialize(value: &BalanceMessageReceiverValue)
            assert(deserialized > 0, "Protoex.BalanceMessage deserialization failed!")

            // Log the value
            if listener.logging {
                let message = BalanceMessageReceiverValue.description
                listener.onReceiveLog(message: message)
            }

            // Call receive handler with deserialized value
            listener.onReceive(value: BalanceMessageReceiverValue)
            return true
        case ChronoxorProtoex.AccountMessageModel.fbeTypeConst:
            // Deserialize the value from the FBE stream
            AccountMessageReceiverModel.attach(buffer: buffer, offset: offset)
            assert(AccountMessageReceiverModel.verify(), "Protoex.AccountMessage validation failed!")
            let deserialized = AccountMessageReceiverModel.deserialize(value: &AccountMessageReceiverValue)
            assert(deserialized > 0, "Protoex.AccountMessage deserialization failed!")

            // Log the value
            if listener.logging {
                let message = AccountMessageReceiverValue.description
                listener.onReceiveLog(message: message)
            }

            // Call receive handler with deserialized value
            listener.onReceive(value: AccountMessageReceiverValue)
            return true
        default: break
        }

        if ProtoClient.onReceiveListener(listener: listener, type: type, buffer: buffer, offset: offset, size: size) {
            return true
        }

        return false
    }
}