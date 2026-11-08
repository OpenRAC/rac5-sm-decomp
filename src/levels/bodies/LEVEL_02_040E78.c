typedef struct State {
    char pad_00[0x64];
    int flags;
} State;

typedef struct Context {
    char pad_00[0x5AC];
    State *state;
} Context;

void func_040E78(Context *context, int value)
{
    State *state = context->state;

    if (state != 0)
        state->flags = (state->flags & ~0x20) | (((value ^ 1) & 1) << 5);
}
