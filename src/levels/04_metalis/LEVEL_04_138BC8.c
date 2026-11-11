typedef struct {
    char pad_00[4];
    int id;
    float previous;
    float current;
    int data;
} State;

extern void func_08FE08(void *, int, float);

void func_138BC8(State *state) {
    float next;
    if (0.009999999776482582f < state->current) {
        func_08FE08(&state->data, state->id, state->current);
        next = state->current - state->previous;
        state->current = next;
        if (next < 0.0f)
            state->current = 0.0f;
    }
}
