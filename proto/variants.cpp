// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// Version: 1.7.0.0

#include "variants.h"

namespace variants {

std::ostream& operator<<(std::ostream& stream, const V& value)
{
    std::visit(
        overloaded
        {
            [&stream](const std::string& v) { stream << v; }
            , [&stream](int32_t v) { stream << v; }
            , [&stream](double v) { stream << v; }
            , [&stream](const ::variants::Simple& v) { stream << v; }
        },
        value);
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Expr& value)
{
    std::visit(
        overloaded
        {
            [&stream](bool v) { stream << v; }
            , [&stream](int32_t v) { stream << v; }
        },
        value);
    return stream;
}


Simple::Simple()
    : name()
{}

Simple::Simple(const std::string& arg_name)
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

void Simple::swap(Simple& other) noexcept
{
    using std::swap;
    swap(name, other.name);
}

std::ostream& operator<<(std::ostream& stream, const Simple& value)
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

void Value::swap(Value& other) noexcept
{
    using std::swap;
    swap(v, other.v);
}

std::ostream& operator<<(std::ostream& stream, const Value& value)
{
    stream << "Value(";
    stream << "v="; stream << value.v;
    stream << ")";
    return stream;
}

} // namespace variants
