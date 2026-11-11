/* LEVEL_17.REL:0x0AAE18: update the global queued/current state. */
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

extern GlobalState D_00267C70;

void func_0AAE18(void)
{
    int previous;
    if (D_00267C70.hold != 0) {
        if (D_00267C70.queued != 0)
            D_00267C70.previous = D_00267C70.queued;
    } else if (D_00267C70.active != 0) {
        D_00267C70.active = 0;
        D_00267C70.next = 0;
    } else {
        D_00267C70.next = D_00267C70.current;
    }
    previous = D_00267C70.previous;
    D_00267C70.previous = 0;
    D_00267C70.current = previous;
    D_00267C70.queued = 0;
}
