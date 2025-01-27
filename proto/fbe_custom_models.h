//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

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

#include "fbe_models.h"

#include "fbe_ptr.h"

namespace FBE {

// base class for struct field
class BaseFieldModel
{
public:
    virtual ~BaseFieldModel() = default;
    // Get the field offset
    virtual size_t fbe_offset() const noexcept = 0;
    // Get the field size
    virtual size_t fbe_size() const noexcept = 0;
    // Get the field body size
    // virtual size_t fbe_body() const noexcept = 0;
    // Get the field extra size
    virtual size_t fbe_extra() const noexcept = 0;

    // Shift the current field offset
    virtual void fbe_shift(size_t size) noexcept = 0;
    // Unshift the current field offset
    virtual void fbe_unshift(size_t size) noexcept = 0;

    // Check if the struct value is valid
    virtual bool verify(bool fbe_verify_type = true) const noexcept = 0;
    virtual bool verify_fields(size_t fbe_struct_size) const noexcept = 0;

    // Get the struct value (begin phase)
    virtual size_t get_begin() const noexcept = 0;
    // Get the struct value (end phase)
    virtual void get_end(size_t fbe_begin) const noexcept = 0;

    // Set the struct value (begin phase)
    virtual size_t set_begin() = 0;
    // Set the struct value (end phase)
    virtual void set_end(size_t fbe_begin) = 0;

    // Set the struct value
    virtual void set(const ::FBE::Base& fbe_value) noexcept = 0;
    // Set the struct fields values
    virtual void set_fields(const ::FBE::Base& fbe_value) noexcept = 0;

    // Get the struct value
    virtual void get(::FBE::Base& fbe_value) noexcept = 0;
    // Get the struct fields values
    virtual void get_fields(::FBE::Base& fbe_value, size_t fbe_struct_size) noexcept = 0;
};

// Fast Binary Encoding field model array
template <typename T, typename TStruct, size_t N>
class FieldModelCustomArray
{
public:
    FieldModelCustomArray(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset), _model(buffer, offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return N * _model.fbe_size(); }
    // Get the field extra size
    size_t fbe_extra() const noexcept { return 0; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Get the array
    const uint8_t* data() const noexcept;
    // Get the array
    uint8_t* data() noexcept;
    // Get the array offset
    size_t offset() const noexcept { return 0; }
    // Get the array size
    size_t size() const noexcept { return N; }

    // Array index operator
    T operator[](size_t index) const noexcept;

    // Check if the array is valid
    bool verify() const noexcept;

    // Get the array as C-array
    template <size_t S>
    void get(TStruct (&values)[S]) const noexcept;
    template <size_t S>
    void get(TStruct* (&values)[S]) const noexcept;
    // Get the array as std::array
    template <size_t S>
    void get(std::array<TStruct, S>& values) const noexcept;
    template <size_t S>
    void get(std::array<TStruct*, S>& values) const noexcept;

    // Set the array as C-array
    template <size_t S>
    void set(const TStruct (&values)[S]) noexcept;
    template <size_t S>
    void set(const TStruct* (&values)[S]) noexcept;
    
    // Set the array as std::array
    template <size_t S>
    void set(const std::array<TStruct, S>& values) noexcept;
    template <size_t S>
    void set(const std::array<TStruct*, S>& values) noexcept;

    // Get the array as std::vector
    void get(std::vector<TStruct>& values) const noexcept;
    void get(std::vector<TStruct*>& values) const noexcept;

    // Set the array as std::vector
    void set(const std::vector<TStruct>& values) noexcept;
    void set(const std::vector<TStruct*>& values) noexcept;

    // Get the array as std::pmr::vector
    void get(std::pmr::vector<TStruct>& values) const noexcept;
    void get(std::pmr::vector<TStruct*>& values) const noexcept;

    // Set the array as std::pmr::vector
    void set(const std::pmr::vector<TStruct>& values) noexcept;
    void set(const std::pmr::vector<TStruct*>& values) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
    T _model;
};

template <typename T, typename TStruct>
class FieldModelCustomVector
{
public:
    FieldModelCustomVector(FBEBuffer& buffer, size_t offset) noexcept: _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Get the vector offset
    size_t offset() const noexcept;
    // Get the vector size
    size_t size() const noexcept;

    // Vector index operator
    T operator[](size_t index) const noexcept;
    // Resize the vector and get its first model
    T resize(size_t size);

    // Check if the vector is valid
    bool verify() const noexcept;

    // Get the vector as std::vector
    void get(std::vector<TStruct>& values) const noexcept;
    void get(std::vector<TStruct*>& values) const noexcept;
    // Get the vector as std::list
    void get(std::list<TStruct>& values) const noexcept;
    void get(std::list<TStruct*>& values) const noexcept;
    // Get the vector as std::set
    void get(std::set<TStruct>& values) const noexcept;
    void get(std::set<TStruct*>& values) const noexcept;

    // Set the vector as std::vector
    void set(const std::vector<TStruct>& values) noexcept;
    void set(const std::vector<TStruct*>& values) noexcept;
    // Set the vector as std::list
    void set(const std::list<TStruct>& values) noexcept;
    void set(const std::list<TStruct*>& values) noexcept;
    // Set the vector as std::set
    void set(const std::set<TStruct>& values) noexcept;
    void set(const std::set<TStruct*>& values) noexcept;

    // Get the vector as std::pmr::vector
    void get(std::pmr::vector<TStruct>& values) const noexcept;
    void get(std::pmr::vector<TStruct*>& values) const noexcept;
    // Get the vector as std::pmr::list
    void get(std::pmr::list<TStruct>& values) const noexcept;
    void get(std::pmr::list<TStruct*>& values) const noexcept;
    // Get the vector as std::pmr::set
    void get(std::pmr::set<TStruct>& values) const noexcept;
    void get(std::pmr::set<TStruct*>& values) const noexcept;

    // Set the vector as std::pmr::vector
    void set(const std::pmr::vector<TStruct>& values) noexcept;
    void set(const std::pmr::vector<TStruct*>& values) noexcept;
    // Set the vector as std::pmr::list
    void set(const std::pmr::list<TStruct>& values) noexcept;
    void set(const std::pmr::list<TStruct*>& values) noexcept;
    // Set the vector as std::pmr::set
    void set(const std::pmr::set<TStruct>& values) noexcept;
    void set(const std::pmr::set<TStruct*>& values) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

template <typename TKey, typename TValue, typename TKStruct, typename TValueStruct>
class FieldModelCustomMap
{
public:
    FieldModelCustomMap(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Get the map offset
    size_t offset() const noexcept;
    // Get the map size
    size_t size() const noexcept;

    // Map index operator
    std::pair<TKey, TValue> operator[](size_t index) const noexcept;

    // Resize the map and get its first model
    std::pair<TKey, TValue> resize(size_t size);

    // Check if the map is valid
    bool verify() const noexcept;

    // Get the map as std::map
    void get(std::map<TKStruct, TValueStruct>& values) const noexcept;
    void get(std::map<TKStruct, TValueStruct*>& values) const noexcept;
    // Get the map as std::unordered_map
    void get(std::unordered_map<TKStruct, TValueStruct>& values) const noexcept;
    void get(std::unordered_map<TKStruct, TValueStruct*>& values) const noexcept;

    // Set the map as std::map
    void set(const std::map<TKStruct, TValueStruct>& values) noexcept;
    void set(const std::map<TKStruct, TValueStruct*>& values) noexcept;
    // Set the map as std::unordered_map
    void set(const std::unordered_map<TKStruct, TValueStruct>& values) noexcept;
    void set(const std::unordered_map<TKStruct, TValueStruct*>& values) noexcept;

    // Get the map as std::pmr::map
    void get(std::pmr::map<TKStruct, TValueStruct>& values) const noexcept;
    void get(std::pmr::map<TKStruct, TValueStruct*>& values) const noexcept;
    // Get the map as std::pmr::unordered_map
    void get(std::pmr::unordered_map<TKStruct, TValueStruct>& values) const noexcept;
    void get(std::pmr::unordered_map<TKStruct, TValueStruct*>& values) const noexcept;

    // Set the map as std::pmr::map
    void set(const std::pmr::map<TKStruct, TValueStruct>& values) noexcept;
    void set(const std::pmr::map<TKStruct, TValueStruct*>& values) noexcept;
    // Set the map as std::pmr::unordered_map
    void set(const std::pmr::unordered_map<TKStruct, TValueStruct>& values) noexcept;
    void set(const std::pmr::unordered_map<TKStruct, TValueStruct*>& values) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

template <typename T, typename TStruct>
class FieldModelStructOptional
{
public:
    FieldModelStructOptional(FBEBuffer& buffer, size_t offset) noexcept: _buffer(buffer), _offset(offset), value(buffer, 0) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 1 + 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    //! Is the value present?
    explicit operator bool() const noexcept { return has_value(); }

    // Checks if the object contains a value
    bool has_value() const noexcept;

    // Check if the optional value is valid
    bool verify() const noexcept;

    // Get the optional value (being phase)
    size_t get_begin() const noexcept;
    // Get the optional value (end phase)
    void get_end(size_t fbe_begin) const noexcept;

    // Get the optional value
    void get(std::optional<TStruct>& opt) noexcept;

    // Set the optional value (begin phase)
    size_t set_begin(bool has_value);
    // Set the optional value (end phase)
    void set_end(size_t fbe_begin);

    // Set the optional value
    void set(const std::optional<TStruct>& opt);

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    // Base field model value
    T value;
};

} // namespace FBE

#include "fbe_custom_models.inl"
