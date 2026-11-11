/* LEVEL_20.REL:0x095E08: update the global queued/current state. */
typedef struct {
    char pad_00[0x10];
    int current;
    int previous;
    int next;
    char pad_1c;
    unsigned char active;
    char pad_1e[0xE];
    unsigned char hold;
    char pad_2d[3];
    int queued;
} GlobalState;

extern GlobalState D_0019A1B0;

void func_095E08(void)
{
    int previous;
    if (D_0019A1B0.hold != 0) {
        if (D_0019A1B0.queued != 0)
            D_0019A1B0.previous = D_0019A1B0.queued;
    } else if (D_0019A1B0.active != 0) {
        D_0019A1B0.active = 0;
        D_0019A1B0.next = 0;
    } else {
        D_0019A1B0.next = D_0019A1B0.current;
    }
    previous = D_0019A1B0.previous;
    D_0019A1B0.previous = 0;
    D_0019A1B0.current = previous;
    D_0019A1B0.queued = 0;
}
