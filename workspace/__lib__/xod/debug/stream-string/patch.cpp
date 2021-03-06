
struct State {
    Iterator<char> it = Iterator<char>::nil();
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto state = getState(ctx);

    if (isInputDirty<input_IN>(ctx)) {
        auto str = getValue<input_IN>(ctx);
        state->it = str.iterate();
    }

    if (state->it) {
        emitValue<output_OUT1>(ctx, *state->it);
        emitValue<output_OUT2>(ctx, true);
        ++(state->it);
        setTimeout(ctx, 0);
    }
}
