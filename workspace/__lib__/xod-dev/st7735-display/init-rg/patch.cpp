
struct State {};

// clang-format off
{{ GENERATED_CODE }}
// clang-format on

void evaluate(Context ctx) {
    if (!isSettingUp())
        return;
    auto dev = getValue<input_DEV>(ctx);
    dev->initTypeRG();
    emitValue<output_DEVU0027>(ctx, dev);
}
