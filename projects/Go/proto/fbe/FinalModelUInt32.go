//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package fbe

import "errors"

// Fast Binary Encoding UInt32 final model
type FinalModelUInt32 struct {
    // Final model buffer
    buffer *Buffer
    // Final model buffer offset
    offset int
}

// Create a new UInt32 final model
func NewFinalModelUInt32(buffer *Buffer, offset int) *FinalModelUInt32 {
    return &FinalModelUInt32{buffer: buffer, offset: offset}
}

// Get the allocation size
func (fm *FinalModelUInt32) FBEAllocationSize(value uint32) int { return fm.FBESize() }

// Get the final size
func (fm *FinalModelUInt32) FBESize() int { return 4 }

// Get the final offset
func (fm *FinalModelUInt32) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelUInt32) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelUInt32) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelUInt32) FBEUnshift(size int) { fm.offset -= size }

// Check if the value is valid
func (fm *FinalModelUInt32) Verify() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return MaxInt
    }

    return fm.FBESize()
}

// Get the value
func (fm *FinalModelUInt32) Get() (uint32, int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, 0, errors.New("model is broken")
    }

    return ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()), fm.FBESize(), nil
}

// Set the value
func (fm *FinalModelUInt32) Set(value uint32) (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, errors.New("model is broken")
    }

    WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), value)
    return fm.FBESize(), nil
}
