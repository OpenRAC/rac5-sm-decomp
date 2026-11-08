/* LEVEL_10.REL:0x0BD820: update the global queued/current state. */
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

extern GlobalState D_00331E30;

void func_0BD820(void)
{
    int previous;
    if (D_00331E30.hold != 0) {
        if (D_00331E30.queued != 0)
            D_00331E30.previous = D_00331E30.queued;
    } else if (D_00331E30.active != 0) {
        D_00331E30.active = 0;
        D_00331E30.next = 0;
    } else {
        D_00331E30.next = D_00331E30.current;
    }
    previous = D_00331E30.previous;
    D_00331E30.previous = 0;
    D_00331E30.current = previous;
    D_00331E30.queued = 0;
}
