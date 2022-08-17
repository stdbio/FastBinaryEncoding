//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package enums

import "errors"
import "../fbe"

// Fast Binary Encoding EnumInt64 field model
type FieldModelEnumInt64 struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int
}

// Create a new EnumInt64 field model
func NewFieldModelEnumInt64(buffer *fbe.Buffer, offset int) *FieldModelEnumInt64 {
    return &FieldModelEnumInt64{buffer: buffer, offset: offset}
}

// Get the field size
func (fm *FieldModelEnumInt64) FBESize() int { return 8 }
// Get the field extra size
func (fm *FieldModelEnumInt64) FBEExtra() int { return 0 }

// Get the field offset
func (fm *FieldModelEnumInt64) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelEnumInt64) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelEnumInt64) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelEnumInt64) FBEUnshift(size int) { fm.offset -= size }

// Check if the value is valid
func (fm *FieldModelEnumInt64) Verify() bool { return true }

// Get the value
func (fm *FieldModelEnumInt64) Get() (*EnumInt64, error) {
    var value EnumInt64
    return &value, fm.GetValueDefault(&value, EnumInt64(0))
}

// Get the value with provided default value
func (fm *FieldModelEnumInt64) GetDefault(defaults EnumInt64) (*EnumInt64, error) {
    var value EnumInt64
    err := fm.GetValueDefault(&value, defaults)
    return &value, err
}

// Get the value by the given pointer
func (fm *FieldModelEnumInt64) GetValue(value *EnumInt64) error {
    return fm.GetValueDefault(value, EnumInt64(0))
}

// Get the value by the given pointer with provided default value
func (fm *FieldModelEnumInt64) GetValueDefault(value *EnumInt64, defaults EnumInt64) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        *value = defaults
        return nil
    }

    *value = EnumInt64(fbe.ReadInt64(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    return nil
}

// Set the value by the given pointer
func (fm *FieldModelEnumInt64) Set(value *EnumInt64) error {
    return fm.SetValue(*value)
}

// Set the value
func (fm *FieldModelEnumInt64) SetValue(value EnumInt64) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return errors.New("model is broken")
    }

    fbe.WriteInt64(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), int64(value))
    return nil
}
