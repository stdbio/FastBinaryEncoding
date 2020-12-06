// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.5.0.0

import Foundation
import ChronoxorFbe
import ChronoxorProto

public protocol StructBytesBase {
    var f1: Data { get set }
    var f2: Data? { get set }
    var f3: Data? { get set }
}

public protocol StructBytesInheritance {
    var parent: StructBytes { get set }
}

extension StructBytesInheritance {
    public var f1: Data {
        get { return parent.f1 }
        set { parent.f1 = newValue }
    }
    public var f2: Data? {
        get { return parent.f2 }
        set { parent.f2 = newValue }
    }
    public var f3: Data? {
        get { return parent.f3 }
        set { parent.f3 = newValue }
    }
}

public struct StructBytes: StructBytesBase, Comparable, Hashable, Codable {
    public var f1: Data = Data()
    public var f2: Data? = nil
    public var f3: Data? = nil

    public init() { }
    public init(f1: Data, f2: Data?, f3: Data?) {

        self.f1 = f1
        self.f2 = f2
        self.f3 = f3
    }

    public init(other: StructBytes) {
        self.f1 = other.f1
        self.f2 = other.f2
        self.f3 = other.f3
    }

    public init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)
        f1 = try container.decode(Data.self, forKey: .f1)
        f2 = try container.decode(Data?.self, forKey: .f2)
        f3 = try container.decode(Data?.self, forKey: .f3)
    }

    public func clone() throws -> StructBytes {
        // Serialize the struct to the FBE stream
        let writer = StructBytesModel()
        try _ = writer.serialize(value: self)

        // Deserialize the struct from the FBE stream
        let reader = StructBytesModel()
        reader.attach(buffer: writer.buffer)
        return reader.deserialize()
    }

    public static func < (lhs: StructBytes, rhs: StructBytes) -> Bool {
        return true
    }

    public static func == (lhs: StructBytes, rhs: StructBytes) -> Bool {
        return true
    }

    public func hash(into hasher: inout Hasher) {
    }

    public var description: String {
        var sb = String()
        sb.append("StructBytes(")
        sb.append("f1="); sb.append("bytes["); sb.append("\(f1.count)"); sb.append("]")
        sb.append(",f2=");  if let f2 = f2 { sb.append("bytes["); sb.append("\(f2.count)"); sb.append("]") } else { sb.append("null") }
        sb.append(",f3=");  if let f3 = f3 { sb.append("bytes["); sb.append("\(f3.count)"); sb.append("]") } else { sb.append("null") }
        sb.append(")")
        return sb
    }
    private enum CodingKeys: String, CodingKey {
        case f1
        case f2
        case f3
    }

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(f1, forKey: .f1)
        try container.encode(f2, forKey: .f2)
        try container.encode(f3, forKey: .f3)
    }

    public func toJson() throws -> String {
        return String(data: try JSONEncoder().encode(self), encoding: .utf8)!
    }

    public static func fromJson(_ json: String) throws -> StructBytes {
        return try JSONDecoder().decode(StructBytes.self, from: json.data(using: .utf8)!)
    }
}