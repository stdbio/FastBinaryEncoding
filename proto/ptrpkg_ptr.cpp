// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: ptrpkg.fbe
// Version: 1.7.0.0

#include "ptrpkg_ptr.h"

namespace ptrpkg {

Line::Line()
    : v()
    , value()
    , value_ptr(nullptr)
{}

Line::Line(::variants_ptr::V&& arg_v, ::variants_ptr::Value&& arg_value, std::unique_ptr<::variants_ptr::Value> arg_value_ptr)
    : v(std::move(arg_v))
    , value(std::move(arg_value))
    , value_ptr(arg_value_ptr.release())
{}

Line::Line(Line&& other) noexcept
    : v(std::move(other.v))
    , value(std::move(other.value))
    , value_ptr(std::exchange(other.value_ptr, nullptr))
{}

Line::~Line()
{
    if (value_ptr) delete value_ptr;
}

bool Line::operator==([[maybe_unused]] const Line& other) const noexcept
{
    return (
        true
        );
}

bool Line::operator<([[maybe_unused]] const Line& other) const noexcept
{
    return false;
}

Line& Line::operator=(Line&& other) noexcept
{
    if (this != &other)
    {
        v = std::move(other.v);
        value = std::move(other.value);
        value_ptr = std::exchange(other.value_ptr, nullptr);
    }
    return *this;
}

std::string Line::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Line::swap(Line& other) noexcept
{
    using std::swap;
    swap(v, other.v);
    swap(value, other.value);
    swap(value_ptr, other.value_ptr);
}

std::ostream& operator<<(std::ostream& stream, const Line& value)
{
    stream << "Line(";
    stream << "v="; stream << value.v;
    stream << ",value="; stream << value.value;
    stream << ",value_ptr="; stream << " ptr of other struct" << (value.value_ptr == nullptr ? "true" : "false");
    stream << ")";
    return stream;
}

} // namespace ptrpkg