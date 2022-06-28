// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// Version: 1.7.0.0

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace variants {
using namespace FBE;
} // namespace variants

namespace FBE {
using namespace ::variants;
} // namespace FBE

namespace variants {
// forward declaration
struct Simple;
struct Value;

using V = std::variant<std::string, int32_t, double, ::variants::Simple>;
std::ostream& operator<<(std::ostream& stream, const V& value);

using Expr = std::variant<bool, int32_t>;
std::ostream& operator<<(std::ostream& stream, const Expr& value);

struct Simple
{
    std::string name;

    size_t fbe_type() const noexcept { return 1; }

    Simple();
    explicit Simple(const std::string& arg_name);
    Simple(const Simple& other) = default;
    Simple(Simple&& other) = default;
    ~Simple() = default;

    Simple& operator=(const Simple& other) = default;
    Simple& operator=(Simple&& other) = default;

    bool operator==(const Simple& other) const noexcept;
    bool operator!=(const Simple& other) const noexcept { return !operator==(other); }
    bool operator<(const Simple& other) const noexcept;
    bool operator<=(const Simple& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Simple& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Simple& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Simple& value);

    void swap(Simple& other) noexcept;
    friend void swap(Simple& value1, Simple& value2) noexcept { value1.swap(value2); }
};

} // namespace variants

namespace std {

template<>
struct hash<variants::Simple>
{
    typedef variants::Simple argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

} // namespace std

namespace variants {

struct Value
{
    ::variants::V v;

    size_t fbe_type() const noexcept { return 2; }

    Value();
    explicit Value(const ::variants::V& arg_v);
    Value(const Value& other) = default;
    Value(Value&& other) = default;
    ~Value() = default;

    Value& operator=(const Value& other) = default;
    Value& operator=(Value&& other) = default;

    bool operator==(const Value& other) const noexcept;
    bool operator!=(const Value& other) const noexcept { return !operator==(other); }
    bool operator<(const Value& other) const noexcept;
    bool operator<=(const Value& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Value& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Value& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Value& value);

    void swap(Value& other) noexcept;
    friend void swap(Value& value1, Value& value2) noexcept { value1.swap(value2); }
};

} // namespace variants

namespace std {

template<>
struct hash<variants::Value>
{
    typedef variants::Value argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

} // namespace std

namespace variants {

} // namespace variants