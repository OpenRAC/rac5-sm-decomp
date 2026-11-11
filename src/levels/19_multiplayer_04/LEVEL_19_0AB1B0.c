/* LEVEL_19.REL:0x0AB1B0: update the global queued/current state. */
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

extern GlobalState D_00276AF0;

void func_0AB1B0(void)
{
    int previous;
    if (D_00276AF0.hold != 0) {
        if (D_00276AF0.queued != 0)
            D_00276AF0.previous = D_00276AF0.queued;
    } else if (D_00276AF0.active != 0) {
        D_00276AF0.active = 0;
        D_00276AF0.next = 0;
    } else {
        D_00276AF0.next = D_00276AF0.current;
    }
    previous = D_00276AF0.previous;
    D_00276AF0.previous = 0;
    D_00276AF0.current = previous;
    D_00276AF0.queued = 0;
}
