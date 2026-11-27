/* LEVEL_01:0x17DE50 -- advances the float timer at +0x114 by 1.5 and, past the limit, bumps the counter at +0x68 once and resets the timer 5 units later. */
typedef struct State {
    char pad_00[0x68];
    float count;
    char pad_6C[0xA4 - 0x6C];
    float limit;
    char pad_A8[0x114 - 0xA8];
    float timer;
} State;

void func_17DE50(State *s)
{
    float previous = s->timer;

    if (previous != 0.0f) {
        float next = previous + 1.50000011920929f;

        if (s->limit < next) {
            if (previous <= s->limit)
                s->count += 1.5f;
            if (s->limit < next - 5.0f) {
                s->timer = 0.0f;
            } else {
                s->timer = next;
            }
        } else {
            s->timer = next;
        }
    }
}
