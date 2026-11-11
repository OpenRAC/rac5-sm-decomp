/* LEVEL_01:0x0BC4D0 -- placement copy of LEVEL_02_0C2DE0.c. */
/* LEVEL_02.REL:0x0C2DE0: update the global queued/current state. */
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

extern GlobalState D_00328A30;

void func_0BC4D0(void)
{
    int previous;
    if (D_00328A30.hold != 0) {
        if (D_00328A30.queued != 0)
            D_00328A30.previous = D_00328A30.queued;
    } else if (D_00328A30.active != 0) {
        D_00328A30.active = 0;
        D_00328A30.next = 0;
    } else {
        D_00328A30.next = D_00328A30.current;
    }
    previous = D_00328A30.previous;
    D_00328A30.previous = 0;
    D_00328A30.current = previous;
    D_00328A30.queued = 0;
}
