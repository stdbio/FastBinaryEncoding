//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "variants.h"

namespace variants {

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Expr& value)
{
    stream << "Expr(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{bool}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{int32}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{string}";
            stream << std::get<2>(value);
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const V& value)
{
    stream << "V(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{string}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{int32}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{double}";
            stream << std::get<2>(value);
            break;
        case 3:
            stream<< "{Simple}";
            stream << std::get<3>(value);
            break;
        case 4:
            stream << "{Simple}=[" << std::get<4>(value).size() << "][";
            for (const auto& it : std::get<4>(value))
            {
                stream << std::string(first ? "" : ",") << it;
                first = false;
            }
            stream << "]";
            break;
        case 5:
            stream << "{int32}=[" << std::get<5>(value).size() << "][";
            for (const auto& it : std::get<5>(value))
            {
                stream << std::string(first ? "" : ",") << it;
                first = false;
            }
            stream << "]";
            break;
        case 6:
            stream << "{int32->Simple}=[" << std::get<6>(value).size() << "][";
            for (const auto& it : std::get<6>(value))
            {
                stream << std::string(first ? "" : ",") << it.first;
                stream << "->";
                stream << it.second;
                first = false;
            }
            stream << "]";
            break;
        case 7:
            stream << "{bytes}=[" << std::get<7>(value).size() << "][";
            for (const auto& it : std::get<7>(value))
            {
                stream << std::string(first ? "" : ",") << "bytes[" << it.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 8:
            stream << "{string}=[" << std::get<8>(value).size() << "][";
            for (const auto& it : std::get<8>(value))
            {
                stream << std::string(first ? "" : ",") << "\"" << it << "\"";
                first = false;
            }
            stream << "]";
            break;
        case 9:
            stream << "{int32->bytes}=[" << std::get<9>(value).size() << "][";
            for (const auto& it : std::get<9>(value))
            {
                stream << std::string(first ? "" : ",") << it.first;
                stream << "->";
                stream << "bytes[" << it.second.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 10:
            stream << "{string->bytes}=[" << std::get<10>(value).size() << "][";
            for (const auto& it : std::get<10>(value))
            {
                stream << std::string(first ? "" : ",") << "\"" << it.first << "\"";
                stream << "->";
                stream << "bytes[" << it.second.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 11:
            stream<< "{Expr}";
            stream << std::get<11>(value);
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}


Simple::Simple()
    : name()
{}

Simple::Simple(const stdb::memory::string& arg_name)
    : name(arg_name)
{}

bool Simple::operator==([[maybe_unused]] const Simple& other) const noexcept
{
    return (
        true
        );
}

bool Simple::operator<([[maybe_unused]] const Simple& other) const noexcept
{
    return false;
}

std::string Simple::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Simple::swap([[maybe_unused]] Simple& other) noexcept
{
    using std::swap;
    swap(name, other.name);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Simple& value)
{
    stream << "Simple(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ")";
    return stream;
}

Value::Value()
    : v()
{}

Value::Value(const ::variants::V& arg_v)
    : v(arg_v)
{}

bool Value::operator==([[maybe_unused]] const Value& other) const noexcept
{
    return (
        true
        );
}

bool Value::operator<([[maybe_unused]] const Value& other) const noexcept
{
    return false;
}

std::string Value::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Value::swap([[maybe_unused]] Value& other) noexcept
{
    using std::swap;
    swap(v, other.v);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Value& value)
{
    stream << "Value(";
    stream << "v="; stream << value.v;
    stream << ")";
    return stream;
}

} // namespace variants
