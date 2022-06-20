// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// Version: 1.7.0.0

#include "osa_models.h"

namespace FBE {

FieldModel<::osa::Extra>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , name(buffer, 4 + 4)
    , detail(buffer, name.fbe_offset() + name.fbe_size())
    , sex(buffer, detail.fbe_offset() + detail.fbe_size())
    , flag(buffer, sex.fbe_offset() + sex.fbe_size())
{}

size_t FieldModel<::osa::Extra>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + name.fbe_size()
        + detail.fbe_size()
        + sex.fbe_size()
        + flag.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::osa::Extra>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + name.fbe_extra()
        + detail.fbe_extra()
        + sex.fbe_extra()
        + flag.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::osa::Extra>::verify(bool fbe_verify_type) const noexcept
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

bool FieldModel<::osa::Extra>::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) > fbe_struct_size)
        return true;
    if (!name.verify())
        return false;
    fbe_current_size += name.fbe_size();

    if ((fbe_current_size + detail.fbe_size()) > fbe_struct_size)
        return true;
    if (!detail.verify())
        return false;
    fbe_current_size += detail.fbe_size();

    if ((fbe_current_size + sex.fbe_size()) > fbe_struct_size)
        return true;
    if (!sex.verify())
        return false;
    fbe_current_size += sex.fbe_size();

    if ((fbe_current_size + flag.fbe_size()) > fbe_struct_size)
        return true;
    if (!flag.verify())
        return false;
    fbe_current_size += flag.fbe_size();

    return true;
}

size_t FieldModel<::osa::Extra>::get_begin() const noexcept
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

void FieldModel<::osa::Extra>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::osa::Extra>::get(::osa::Extra& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::osa::Extra>::get_fields(::osa::Extra& fbe_value, size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) <= fbe_struct_size)
        name.get(fbe_value.name);
    else
        fbe_value.name = "";
    fbe_current_size += name.fbe_size();

    if ((fbe_current_size + detail.fbe_size()) <= fbe_struct_size)
        detail.get(fbe_value.detail);
    else
        fbe_value.detail = "";
    fbe_current_size += detail.fbe_size();

    if ((fbe_current_size + sex.fbe_size()) <= fbe_struct_size)
        sex.get(fbe_value.sex);
    else
        fbe_value.sex = ::osa::Sex();
    fbe_current_size += sex.fbe_size();

    if ((fbe_current_size + flag.fbe_size()) <= fbe_struct_size)
        flag.get(fbe_value.flag);
    else
        fbe_value.flag = ::osa::MyFLags();
    fbe_current_size += flag.fbe_size();
}

size_t FieldModel<::osa::Extra>::set_begin()
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
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4, (uint32_t)fbe_type());

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::osa::Extra>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::osa::Extra>::set(const ::osa::Extra& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::osa::Extra>::set_fields(const ::osa::Extra& fbe_value) noexcept
{
    name.set(fbe_value.name);
    detail.set(fbe_value.detail);
    sex.set(fbe_value.sex);
    flag.set(fbe_value.flag);
}

namespace osa {

bool ExtraModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t ExtraModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t ExtraModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t ExtraModel::serialize(const ::osa::Extra& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t ExtraModel::deserialize(::osa::Extra& value) const noexcept
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

} // namespace osa

FieldModel<::osa::Simple>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , name(buffer, 4 + 4)
    , depth(buffer, name.fbe_offset() + name.fbe_size())
    , sa(buffer, depth.fbe_offset() + depth.fbe_size())
    , sex(buffer, sa.fbe_offset() + sa.fbe_size())
{}

size_t FieldModel<::osa::Simple>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + name.fbe_size()
        + depth.fbe_size()
        + sa.fbe_size()
        + sex.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::osa::Simple>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + name.fbe_extra()
        + depth.fbe_extra()
        + sa.fbe_extra()
        + sex.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::osa::Simple>::verify(bool fbe_verify_type) const noexcept
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

bool FieldModel<::osa::Simple>::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) > fbe_struct_size)
        return true;
    if (!name.verify())
        return false;
    fbe_current_size += name.fbe_size();

    if ((fbe_current_size + depth.fbe_size()) > fbe_struct_size)
        return true;
    if (!depth.verify())
        return false;
    fbe_current_size += depth.fbe_size();

    if ((fbe_current_size + sa.fbe_size()) > fbe_struct_size)
        return true;
    if (!sa.verify())
        return false;
    fbe_current_size += sa.fbe_size();

    if ((fbe_current_size + sex.fbe_size()) > fbe_struct_size)
        return true;
    if (!sex.verify())
        return false;
    fbe_current_size += sex.fbe_size();

    return true;
}

size_t FieldModel<::osa::Simple>::get_begin() const noexcept
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

void FieldModel<::osa::Simple>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::osa::Simple>::get(::osa::Simple& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::osa::Simple>::get_fields(::osa::Simple& fbe_value, size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) <= fbe_struct_size)
        name.get(fbe_value.name);
    else
        fbe_value.name = "";
    fbe_current_size += name.fbe_size();

    if ((fbe_current_size + depth.fbe_size()) <= fbe_struct_size)
        depth.get(fbe_value.depth);
    else
        fbe_value.depth = (int32_t)0ll;
    fbe_current_size += depth.fbe_size();

    if ((fbe_current_size + sa.fbe_size()) <= fbe_struct_size)
        sa.get(fbe_value.sa);
    else
    fbe_current_size += sa.fbe_size();

    if ((fbe_current_size + sex.fbe_size()) <= fbe_struct_size)
        sex.get(fbe_value.sex);
    else
        fbe_value.sex = ::osa::Sex();
    fbe_current_size += sex.fbe_size();
}

size_t FieldModel<::osa::Simple>::set_begin()
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
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4, (uint32_t)fbe_type());

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::osa::Simple>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::osa::Simple>::set(const ::osa::Simple& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::osa::Simple>::set_fields(const ::osa::Simple& fbe_value) noexcept
{
    name.set(fbe_value.name);
    depth.set(fbe_value.depth);
    sa.set(fbe_value.sa);
    sex.set(fbe_value.sex);
}

namespace osa {

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

size_t SimpleModel::serialize(const ::osa::Simple& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t SimpleModel::deserialize(::osa::Simple& value) const noexcept
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

} // namespace osa

} // namespace FBE
