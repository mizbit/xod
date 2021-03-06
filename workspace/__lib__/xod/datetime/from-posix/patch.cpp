
struct State {
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    uint32_t b3 = getValue<input_B3>(ctx);
    uint32_t b2 = getValue<input_B2>(ctx);
    uint32_t b1 = getValue<input_B1>(ctx);
    uint32_t b0 = getValue<input_B0>(ctx);
    uint32_t posix = ((b3 << 24) | (b2 << 16) | (b1 << 8) | b0);
    emitValue<output_OUT>(ctx, (ValueType<output_OUT>::T) posix);
}
