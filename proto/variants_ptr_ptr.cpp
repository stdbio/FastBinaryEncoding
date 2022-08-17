// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants_ptr.fbe
// Version: 1.7.0.0

#include "variants_ptr_ptr.h"

namespace variants_ptr {

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Expr& value)
{
    std::visit(
        overloaded
        {
            [&stream](bool v) { stream << v; }
            , [&stream](const std::string& v) { stream << v; }
            , [&stream](int32_t v) { stream << v; }
            , [&stream](auto&) { stream << "unknown type"; },
        },
        value);
    return stream;
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const V& value)
{
    std::visit(
        overloaded
        {
            [&stream](int32_t v) { stream << v; }
            , [&stream](const std::string& v) { stream << v; }
            , [&stream](double v) { stream << v; }
            , [&stream](const ::variants_ptr::Simple& v) { stream << v; }
            , [&stream](const ::variants_ptr::Expr& v) { stream << v; }
            , [&stream](auto&) { stream << "unknown type"; },
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

Simple::Simple(Simple&& other) noexcept
    : name(std::move(other.name))
{}

Simple::~Simple()
{
}

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

Simple& Simple::operator=(Simple&& other) noexcept
{
    if (this != &other)
    {
        name = std::move(other.name);
    }
    return *this;
}

std::string Simple::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Simple::swap(Simple& other) noexcept
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
    , vo()
    , vo2()
{}

Value::Value(::variants_ptr::V&& arg_v, std::optional<::variants_ptr::V> arg_vo, std::optional<::variants_ptr::V> arg_vo2)
    : v(std::move(arg_v))
    , vo()
    , vo2()
{
    if (arg_vo.has_value()) {
        vo.emplace(std::move(arg_vo.value()));
        arg_vo.reset();
    }
    if (arg_vo2.has_value()) {
        vo2.emplace(std::move(arg_vo2.value()));
        arg_vo2.reset();
    }
}

Value::Value(Value&& other) noexcept
    : v(std::move(other.v))
    , vo()
    , vo2()
{
    if (other.vo.has_value()) {
        vo.emplace(std::move(other.vo.value()));
        other.vo.reset();
    }
    if (other.vo2.has_value()) {
        vo2.emplace(std::move(other.vo2.value()));
        other.vo2.reset();
    }
}

Value::~Value()
{
}

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

Value& Value::operator=(Value&& other) noexcept
{
    if (this != &other)
    {
        v = std::move(other.v);
        if (other.vo.has_value()) {
            vo.emplace(std::move(other.vo.value()));
            other.vo.reset();
        }
        if (other.vo2.has_value()) {
            vo2.emplace(std::move(other.vo2.value()));
            other.vo2.reset();
        }
    }
    return *this;
}

std::string Value::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Value::swap(Value& other) noexcept
{
    using std::swap;
    swap(v, other.v);
    swap(vo, other.vo);
    swap(vo2, other.vo2);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Value& value)
{
    stream << "Value(";
    stream << "v="; stream << value.v;
    stream << ",vo="; if (value.vo) stream << *value.vo; else stream << "null";
    stream << ",vo2="; if (value.vo2) stream << *value.vo2; else stream << "null";
    stream << ")";
    return stream;
}

ValueContainer::ValueContainer()
    : vv()
    , vm()
{}

ValueContainer::ValueContainer(std::vector<::variants_ptr::V> arg_vv, std::unordered_map<int32_t, ::variants_ptr::V> arg_vm)
    : vv(std::move(arg_vv))
    , vm(std::move(arg_vm))
{}

ValueContainer::ValueContainer(ValueContainer&& other) noexcept
    : vv(std::move(other.vv))
    , vm(std::move(other.vm))
{}

ValueContainer::~ValueContainer()
{
}

bool ValueContainer::operator==([[maybe_unused]] const ValueContainer& other) const noexcept
{
    return (
        true
        );
}

bool ValueContainer::operator<([[maybe_unused]] const ValueContainer& other) const noexcept
{
    return false;
}

ValueContainer& ValueContainer::operator=(ValueContainer&& other) noexcept
{
    if (this != &other)
    {
        vv = std::move(other.vv);
        vm = std::move(other.vm);
    }
    return *this;
}

std::string ValueContainer::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void ValueContainer::swap(ValueContainer& other) noexcept
{
    using std::swap;
    swap(vv, other.vv);
    swap(vm, other.vm);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const ValueContainer& value)
{
    stream << "ValueContainer(";
    {
        bool first = true;
        stream << "vv=[" << value.vv.size() << "][";
        for (const auto& it : value.vv)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",vm=[" << value.vm.size()<< "][{";
        for (const auto& it : value.vm)
        {
            stream << std::string(first ? "" : ",") << it.first;
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}]";
    }
    stream << ")";
    return stream;
}

} // namespace variants_ptr
