//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package test

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding StructVector final model
type FinalModelStructVector struct {
    buffer *fbe.Buffer  // Final model buffer
    offset int          // Final model buffer offset

    F1 *FinalModelVectorByte
    F2 *FinalModelVectorOptionalByte
    F3 *FinalModelVectorBytes
    F4 *FinalModelVectorOptionalBytes
    F5 *FinalModelVectorEnumSimple
    F6 *FinalModelVectorOptionalEnumSimple
    F7 *FinalModelVectorFlagsSimple
    F8 *FinalModelVectorOptionalFlagsSimple
    F9 *FinalModelVectorStructSimple
    F10 *FinalModelVectorOptionalStructSimple
}

// Create a new StructVector final model
func NewFinalModelStructVector(buffer *fbe.Buffer, offset int) *FinalModelStructVector {
    fbeResult := FinalModelStructVector{buffer: buffer, offset: offset}
    fbeResult.F1 = NewFinalModelVectorByte(buffer, 0)
    fbeResult.F2 = NewFinalModelVectorOptionalByte(buffer, 0)
    fbeResult.F3 = NewFinalModelVectorBytes(buffer, 0)
    fbeResult.F4 = NewFinalModelVectorOptionalBytes(buffer, 0)
    fbeResult.F5 = NewFinalModelVectorEnumSimple(buffer, 0)
    fbeResult.F6 = NewFinalModelVectorOptionalEnumSimple(buffer, 0)
    fbeResult.F7 = NewFinalModelVectorFlagsSimple(buffer, 0)
    fbeResult.F8 = NewFinalModelVectorOptionalFlagsSimple(buffer, 0)
    fbeResult.F9 = NewFinalModelVectorStructSimple(buffer, 0)
    fbeResult.F10 = NewFinalModelVectorOptionalStructSimple(buffer, 0)
    return &fbeResult
}

// Get the allocation size
func (fm *FinalModelStructVector) FBEAllocationSize(fbeValue *StructVector) int {
    fbeResult := 0 +
        fm.F1.FBEAllocationSize(fbeValue.F1) +
        fm.F2.FBEAllocationSize(fbeValue.F2) +
        fm.F3.FBEAllocationSize(fbeValue.F3) +
        fm.F4.FBEAllocationSize(fbeValue.F4) +
        fm.F5.FBEAllocationSize(fbeValue.F5) +
        fm.F6.FBEAllocationSize(fbeValue.F6) +
        fm.F7.FBEAllocationSize(fbeValue.F7) +
        fm.F8.FBEAllocationSize(fbeValue.F8) +
        fm.F9.FBEAllocationSize(fbeValue.F9) +
        fm.F10.FBEAllocationSize(fbeValue.F10) +
        0
    return fbeResult
}

// Get the final size
func (fm *FinalModelStructVector) FBESize() int { return 0 }

// Get the final extra size
func (fm *FinalModelStructVector) FBEExtra() int { return 0 }

// Get the final type
func (fm *FinalModelStructVector) FBEType() int { return 130 }

// Get the final offset
func (fm *FinalModelStructVector) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelStructVector) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelStructVector) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelStructVector) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FinalModelStructVector) Verify() int {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult := fm.VerifyFields()
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult
}

// Check if the struct fields are valid
func (fm *FinalModelStructVector) VerifyFields() int {
    fbeCurrentOffset := 0
    fbeFieldSize := 0


    fm.F1.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F1.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F2.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F2.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F3.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F3.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F4.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F4.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F5.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F5.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F6.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F6.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F7.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F7.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F8.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F8.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F9.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F9.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F10.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F10.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    return fbeCurrentOffset
}

// Get the struct value
func (fm *FinalModelStructVector) Get() (*StructVector, int, error) {
    fbeResult := NewStructVector()
    fbeSize, err := fm.GetValue(fbeResult)
    return fbeResult, fbeSize, err
}

// Get the struct value by the given pointer
func (fm *FinalModelStructVector) GetValue(fbeValue *StructVector) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeSize, err := fm.GetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeSize, err
}

// Get the struct fields values
func (fm *FinalModelStructVector) GetFields(fbeValue *StructVector) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.F1.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F1, fbeFieldSize, err = fm.F1.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F2.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F2, fbeFieldSize, err = fm.F2.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F3.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F3, fbeFieldSize, err = fm.F3.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F4.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F4, fbeFieldSize, err = fm.F4.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F5.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F5, fbeFieldSize, err = fm.F5.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F6.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F6, fbeFieldSize, err = fm.F6.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F7.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F7, fbeFieldSize, err = fm.F7.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F8.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F8, fbeFieldSize, err = fm.F8.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F9.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F9, fbeFieldSize, err = fm.F9.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F10.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F10, fbeFieldSize, err = fm.F10.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}

// Set the struct value
func (fm *FinalModelStructVector) Set(fbeValue *StructVector) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult, err := fm.SetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult, err
}

// Set the struct fields values
func (fm *FinalModelStructVector) SetFields(fbeValue *StructVector) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.F1.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F1.Set(fbeValue.F1); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F2.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F2.Set(fbeValue.F2); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F3.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F3.Set(fbeValue.F3); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F4.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F4.Set(fbeValue.F4); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F5.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F5.Set(fbeValue.F5); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F6.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F6.Set(fbeValue.F6); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F7.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F7.Set(fbeValue.F7); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F8.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F8.Set(fbeValue.F8); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F9.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F9.Set(fbeValue.F9); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F10.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F10.Set(fbeValue.F10); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}
