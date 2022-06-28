// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variant.fbe
// Version: 1.7.0.0

#include "variants_ptr_ptr_models.h"

namespace FBE {

FieldModelVariant_variants_ptr_V::FieldModelVariant_variants_ptr_V(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

size_t FieldModelVariant_variants_ptr_V::fbe_body() const noexcept
{
    // variant type's fbe_size not included
    size_t fbe_result = 4;
    return fbe_result;
}

size_t FieldModelVariant_variants_ptr_V::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body();

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModelVariant_variants_ptr_V::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return false;

    uint32_t fbe_variant_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    if (fbe_variant_type < 0 || fbe_variant_type >= 5)
        return false;

    _buffer.shift(fbe_variant_offset);
    switch(fbe_variant_type) {
        case 0: {
            FieldModel<std::string> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 2: {
            FieldModel<double> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 3: {
            FieldModel_variants_ptr_Simple fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 4: {
            FieldModelPtr_variants_ptr_Simple fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
    return true;
}

void FieldModelVariant_variants_ptr_V::get(::variants_ptr::V& fbe_value) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return;
    uint32_t vairant_type_index = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    assert(vairant_type_index >= 0 && vairant_type_index < 5 && "Model is broken!");

    _buffer.shift(fbe_variant_offset);

    switch(vairant_type_index) {
        case 0: {
            FieldModel<std::string> fbe_model(_buffer, 4);
            fbe_value.emplace<std::string>();
            auto& value = std::get<std::string>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            fbe_value.emplace<int32_t>();
            auto& value = std::get<int32_t>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 2: {
            FieldModel<double> fbe_model(_buffer, 4);
            fbe_value.emplace<double>();
            auto& value = std::get<double>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 3: {
            FieldModel_variants_ptr_Simple fbe_model(_buffer, 4);
            fbe_value.emplace<::variants_ptr::Simple>();
            auto& value = std::get<::variants_ptr::Simple>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 4: {
            FieldModelPtr_variants_ptr_Simple fbe_model(_buffer, 4);
            fbe_value.emplace<::variants_ptr::Simple*>();
            auto& value = std::get<::variants_ptr::Simple*>(fbe_value);
            fbe_model.get(&value);
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
}

size_t FieldModelVariant_variants_ptr_V::set_begin(size_t variant_type_fbe_size, size_t variant_type_index)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_variant_size = (uint32_t)(fbe_body() + variant_type_fbe_size);
    uint32_t fbe_variant_offset = (uint32_t)(_buffer.allocate(fbe_variant_size) - _buffer.offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + fbe_variant_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + fbe_variant_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset(), fbe_variant_offset);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset, variant_type_index);

    _buffer.shift(fbe_variant_offset);
    return fbe_variant_offset;
}

void FieldModelVariant_variants_ptr_V::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

// Set the variant value
void FieldModelVariant_variants_ptr_V::set(const ::variants_ptr::V& fbe_value) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    std::visit(
        overloaded
        {
            [this, &fbe_value](const std::string& v) {
                FieldModel<std::string> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, &fbe_value](int32_t v) {
                FieldModel<int32_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, &fbe_value](double v) {
                FieldModel<double> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, &fbe_value](const ::variants_ptr::Simple& v) {
                FieldModel_variants_ptr_Simple fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, &fbe_value](::variants_ptr::Simple* v) {
                FieldModelPtr_variants_ptr_Simple fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
        },
        fbe_value
    );
}


FieldModelVariant_variants_ptr_Expr::FieldModelVariant_variants_ptr_Expr(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

size_t FieldModelVariant_variants_ptr_Expr::fbe_body() const noexcept
{
    // variant type's fbe_size not included
    size_t fbe_result = 4;
    return fbe_result;
}

size_t FieldModelVariant_variants_ptr_Expr::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body();

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModelVariant_variants_ptr_Expr::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return false;

    uint32_t fbe_variant_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    if (fbe_variant_type < 0 || fbe_variant_type >= 2)
        return false;

    _buffer.shift(fbe_variant_offset);
    switch(fbe_variant_type) {
        case 0: {
            FieldModel<bool> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
    return true;
}

void FieldModelVariant_variants_ptr_Expr::get(::variants_ptr::Expr& fbe_value) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return;
    uint32_t vairant_type_index = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    assert(vairant_type_index >= 0 && vairant_type_index < 2 && "Model is broken!");

    _buffer.shift(fbe_variant_offset);

    switch(vairant_type_index) {
        case 0: {
            FieldModel<bool> fbe_model(_buffer, 4);
            fbe_value.emplace<bool>();
            auto& value = std::get<bool>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            fbe_value.emplace<int32_t>();
            auto& value = std::get<int32_t>(fbe_value);
            fbe_model.get(value);
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
}

size_t FieldModelVariant_variants_ptr_Expr::set_begin(size_t variant_type_fbe_size, size_t variant_type_index)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_variant_size = (uint32_t)(fbe_body() + variant_type_fbe_size);
    uint32_t fbe_variant_offset = (uint32_t)(_buffer.allocate(fbe_variant_size) - _buffer.offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + fbe_variant_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + fbe_variant_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset(), fbe_variant_offset);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset, variant_type_index);

    _buffer.shift(fbe_variant_offset);
    return fbe_variant_offset;
}

void FieldModelVariant_variants_ptr_Expr::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

// Set the variant value
void FieldModelVariant_variants_ptr_Expr::set(const ::variants_ptr::Expr& fbe_value) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    std::visit(
        overloaded
        {
            [this, &fbe_value](bool v) {
                FieldModel<bool> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, &fbe_value](int32_t v) {
                FieldModel<int32_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_value.index());
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
        },
        fbe_value
    );
}


FieldModelPtr_variants_ptr_Simple::FieldModelPtr_variants_ptr_Simple(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

FieldModelPtr_variants_ptr_Simple::~FieldModelPtr_variants_ptr_Simple()
{
    if (ptr) delete ptr;
}

size_t FieldModelPtr_variants_ptr_Simple::fbe_extra() const noexcept
{
    if (!ptr) return 0;

    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_ptr_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1);
    if ((fbe_ptr_offset == 0) || ((_buffer.offset() + fbe_ptr_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_ptr_offset);
    size_t fbe_result = ptr->fbe_size() + ptr->fbe_extra();
    _buffer.unshift(fbe_ptr_offset);

    return fbe_result;
}

bool FieldModelPtr_variants_ptr_Simple::verify() const noexcept
{
    if (!ptr) return true;

    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint8_t fbe_has_value = *((const uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if (fbe_has_value == 0)
        return true;

    uint32_t fbe_optional_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1);
    if (fbe_optional_offset == 0)
        return false;

    _buffer.shift(fbe_optional_offset);
    bool fbe_result = ptr->verify();
    _buffer.unshift(fbe_optional_offset);
    return fbe_result;
}

bool FieldModelPtr_variants_ptr_Simple::has_value() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return false;

    uint8_t fbe_has_value = *((const uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset()));
    return (fbe_has_value != 0);
}

size_t FieldModelPtr_variants_ptr_Simple::get_begin() const noexcept
{
    if (!has_value())
        return 0;

    uint32_t fbe_ptr_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1);
    assert((fbe_ptr_offset > 0) && "Model is broken!");
    if (fbe_ptr_offset == 0)
        return 0;

    _buffer.shift(fbe_ptr_offset);
    return fbe_ptr_offset;
}

void FieldModelPtr_variants_ptr_Simple::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModelPtr_variants_ptr_Simple::get(::variants_ptr::Simple** fbe_value) noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    ptr = new FieldModel_variants_ptr_Simple(_buffer, 0);

    ::variants_ptr::Simple *tempModel = new ::variants_ptr::Simple();
    ptr->get(*tempModel);
    *fbe_value = tempModel;

    get_end(fbe_begin);
}

size_t FieldModelPtr_variants_ptr_Simple::set_begin(bool has_value)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint8_t fbe_has_value = has_value ? 1 : 0;
    *((uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_has_value;
    if (fbe_has_value == 0)
        return 0;

    uint32_t fbe_ptr_size = 4;
    uint32_t fbe_ptr_offset = (uint32_t)(_buffer.allocate(fbe_ptr_size) - _buffer.offset());
    assert(((fbe_ptr_offset > 0) && ((_buffer.offset() + fbe_ptr_offset + fbe_ptr_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_ptr_offset == 0) || ((_buffer.offset() + fbe_ptr_offset + fbe_ptr_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1, fbe_ptr_offset);

    _buffer.shift(fbe_ptr_offset);
    return fbe_ptr_offset;
}

void FieldModelPtr_variants_ptr_Simple::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModelPtr_variants_ptr_Simple::set(const ::variants_ptr::Simple* fbe_value) noexcept
{
    size_t fbe_begin = set_begin(fbe_value != nullptr);
    if (fbe_begin == 0)
        return;

    if (fbe_value != nullptr) {
        BaseFieldModel* temp = new FieldModel_variants_ptr_Simple(_buffer, 0);
        ptr = temp;
        ptr->set(*fbe_value);
    }

    set_end(fbe_begin);
}

FieldModel_variants_ptr_Simple::FieldModel_variants_ptr_Simple(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , name(buffer, 4 + 4)
{}

size_t FieldModel_variants_ptr_Simple::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + name.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel_variants_ptr_Simple::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + name.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel_variants_ptr_Simple::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset);
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4);
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel_variants_ptr_Simple::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) > fbe_struct_size)
        return true;
    if (!name.verify())
        return false;
    fbe_current_size += name.fbe_size();

    return true;
}

size_t FieldModel_variants_ptr_Simple::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset);
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel_variants_ptr_Simple::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel_variants_ptr_Simple::get(::FBE::Base& fbe_value) noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel_variants_ptr_Simple::get_fields(::FBE::Base& base_fbe_value, size_t fbe_struct_size) noexcept
{
    ::variants_ptr::Simple& fbe_value = static_cast<::variants_ptr::Simple&>(base_fbe_value);
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) <= fbe_struct_size)
        {
            name.get(fbe_value.name);
        }
    else
        fbe_value.name = "";
    fbe_current_size += name.fbe_size();
}

size_t FieldModel_variants_ptr_Simple::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset(), fbe_struct_offset);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset, fbe_struct_size);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4, fbe_type());

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel_variants_ptr_Simple::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel_variants_ptr_Simple::set(const ::FBE::Base& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel_variants_ptr_Simple::set_fields(const ::FBE::Base& base_fbe_value) noexcept
{
    const ::variants_ptr::Simple& fbe_value = static_cast<const ::variants_ptr::Simple&>(base_fbe_value);
    name.set(fbe_value.name);
}

namespace variants_ptr {

bool SimpleModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t SimpleModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t SimpleModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t SimpleModel::serialize(const ::variants_ptr::Simple& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t SimpleModel::deserialize(::variants_ptr::Simple& value) noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace variants_ptr

FieldModelPtr_variants_ptr_Value::FieldModelPtr_variants_ptr_Value(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

FieldModelPtr_variants_ptr_Value::~FieldModelPtr_variants_ptr_Value()
{
    if (ptr) delete ptr;
}

size_t FieldModelPtr_variants_ptr_Value::fbe_extra() const noexcept
{
    if (!ptr) return 0;

    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_ptr_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1);
    if ((fbe_ptr_offset == 0) || ((_buffer.offset() + fbe_ptr_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_ptr_offset);
    size_t fbe_result = ptr->fbe_size() + ptr->fbe_extra();
    _buffer.unshift(fbe_ptr_offset);

    return fbe_result;
}

bool FieldModelPtr_variants_ptr_Value::verify() const noexcept
{
    if (!ptr) return true;

    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint8_t fbe_has_value = *((const uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if (fbe_has_value == 0)
        return true;

    uint32_t fbe_optional_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1);
    if (fbe_optional_offset == 0)
        return false;

    _buffer.shift(fbe_optional_offset);
    bool fbe_result = ptr->verify();
    _buffer.unshift(fbe_optional_offset);
    return fbe_result;
}

bool FieldModelPtr_variants_ptr_Value::has_value() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return false;

    uint8_t fbe_has_value = *((const uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset()));
    return (fbe_has_value != 0);
}

size_t FieldModelPtr_variants_ptr_Value::get_begin() const noexcept
{
    if (!has_value())
        return 0;

    uint32_t fbe_ptr_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1);
    assert((fbe_ptr_offset > 0) && "Model is broken!");
    if (fbe_ptr_offset == 0)
        return 0;

    _buffer.shift(fbe_ptr_offset);
    return fbe_ptr_offset;
}

void FieldModelPtr_variants_ptr_Value::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModelPtr_variants_ptr_Value::get(::variants_ptr::Value** fbe_value) noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    ptr = new FieldModel_variants_ptr_Value(_buffer, 0);

    ::variants_ptr::Value *tempModel = new ::variants_ptr::Value();
    ptr->get(*tempModel);
    *fbe_value = tempModel;

    get_end(fbe_begin);
}

size_t FieldModelPtr_variants_ptr_Value::set_begin(bool has_value)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint8_t fbe_has_value = has_value ? 1 : 0;
    *((uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_has_value;
    if (fbe_has_value == 0)
        return 0;

    uint32_t fbe_ptr_size = 4;
    uint32_t fbe_ptr_offset = (uint32_t)(_buffer.allocate(fbe_ptr_size) - _buffer.offset());
    assert(((fbe_ptr_offset > 0) && ((_buffer.offset() + fbe_ptr_offset + fbe_ptr_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_ptr_offset == 0) || ((_buffer.offset() + fbe_ptr_offset + fbe_ptr_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset() + 1, fbe_ptr_offset);

    _buffer.shift(fbe_ptr_offset);
    return fbe_ptr_offset;
}

void FieldModelPtr_variants_ptr_Value::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModelPtr_variants_ptr_Value::set(const ::variants_ptr::Value* fbe_value) noexcept
{
    size_t fbe_begin = set_begin(fbe_value != nullptr);
    if (fbe_begin == 0)
        return;

    if (fbe_value != nullptr) {
        BaseFieldModel* temp = new FieldModel_variants_ptr_Value(_buffer, 0);
        ptr = temp;
        ptr->set(*fbe_value);
    }

    set_end(fbe_begin);
}

FieldModel_variants_ptr_Value::FieldModel_variants_ptr_Value(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , v(buffer, 4 + 4)
{}

size_t FieldModel_variants_ptr_Value::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + v.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel_variants_ptr_Value::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + v.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel_variants_ptr_Value::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset);
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4);
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel_variants_ptr_Value::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + v.fbe_size()) > fbe_struct_size)
        return true;
    if (!v.verify())
        return false;
    fbe_current_size += v.fbe_size();

    return true;
}

size_t FieldModel_variants_ptr_Value::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset);
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel_variants_ptr_Value::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel_variants_ptr_Value::get(::FBE::Base& fbe_value) noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel_variants_ptr_Value::get_fields(::FBE::Base& base_fbe_value, size_t fbe_struct_size) noexcept
{
    ::variants_ptr::Value& fbe_value = static_cast<::variants_ptr::Value&>(base_fbe_value);
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + v.fbe_size()) <= fbe_struct_size)
        {
            v.get(fbe_value.v);
        }
    else
        fbe_value.v = ::variants_ptr::V();
    fbe_current_size += v.fbe_size();
}

size_t FieldModel_variants_ptr_Value::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset(), fbe_struct_offset);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset, fbe_struct_size);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4, fbe_type());

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel_variants_ptr_Value::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel_variants_ptr_Value::set(const ::FBE::Base& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel_variants_ptr_Value::set_fields(const ::FBE::Base& base_fbe_value) noexcept
{
    const ::variants_ptr::Value& fbe_value = static_cast<const ::variants_ptr::Value&>(base_fbe_value);
    v.set(fbe_value.v);
}

namespace variants_ptr {

bool ValueModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t ValueModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t ValueModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t ValueModel::serialize(const ::variants_ptr::Value& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t ValueModel::deserialize(::variants_ptr::Value& value) noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace variants_ptr

} // namespace FBE