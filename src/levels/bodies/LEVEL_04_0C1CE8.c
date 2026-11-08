/* LEVEL_04.REL:0x0C1CE8: update the global queued/current state. */
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

extern GlobalState D_00343230;

void func_0C1CE8(void)
{
    int previous;
    if (D_00343230.hold != 0) {
        if (D_00343230.queued != 0)
            D_00343230.previous = D_00343230.queued;
    } else if (D_00343230.active != 0) {
        D_00343230.active = 0;
        D_00343230.next = 0;
    } else {
        D_00343230.next = D_00343230.current;
    }
    previous = D_00343230.previous;
    D_00343230.previous = 0;
    D_00343230.current = previous;
    D_00343230.queued = 0;
}
