//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package variants.fbe;

// Fast Binary Encoding Value model
public final class ValueModel extends fbe.Model
{
    public final FieldModelValue model;

    public ValueModel() { model = new FieldModelValue(getBuffer(), 4); }
    public ValueModel(fbe.Buffer buffer) { super(buffer); model = new FieldModelValue(getBuffer(), 4); }

    // Get the model size
    public long fbeSize() { return model.fbeSize() + model.fbeExtra(); }
    // Get the model type
    public static final long fbeTypeConst = FieldModelValue.fbeTypeConst;
    public long fbeType() { return fbeTypeConst; }

    // Check if the struct value is valid
    public boolean verify()
    {
        if ((getBuffer().getOffset() + model.fbeOffset() - 4) > getBuffer().getSize())
            return false;

        int fbeFullSize = readInt32(model.fbeOffset() - 4);
        if (fbeFullSize < model.fbeSize())
            return false;

        return model.verify();
    }

    // Create a new model (begin phase)
    public long createBegin()
    {
        long fbeBegin = getBuffer().allocate(4 + model.fbeSize());
        return fbeBegin;
    }

    // Create a new model (end phase)
    public long createEnd(long fbeBegin)
    {
        long fbeEnd = getBuffer().getSize();
        int fbeFullSize = (int)(fbeEnd - fbeBegin);
        write(model.fbeOffset() - 4, fbeFullSize);
        return fbeFullSize;
    }

    // Serialize the struct value
    public long serialize(variants.Value value)
    {
        long fbeBegin = createBegin();
        model.set(value);
        long fbeFullSize = createEnd(fbeBegin);
        return fbeFullSize;
    }

    // Deserialize the struct value
    public variants.Value deserialize() { var value = new variants.Value(); deserialize(value); return value; }
    public long deserialize(variants.Value value)
    {
        if ((getBuffer().getOffset() + model.fbeOffset() - 4) > getBuffer().getSize())
        {
            value = new variants.Value();
            return 0;
        }

        int fbeFullSize = readInt32(model.fbeOffset() - 4);
        assert (fbeFullSize >= model.fbeSize()) : "Model is broken!";
        if (fbeFullSize < model.fbeSize())
        {
            value = new variants.Value();
            return 0;
        }

        value = model.get(value);
        return fbeFullSize;
    }

    // Move to the next struct value
    public void next(long prev)
    {
        model.fbeShift(prev);
    }
}