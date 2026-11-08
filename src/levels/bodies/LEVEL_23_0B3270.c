/* LEVEL_23.REL:0x0B3270: update the global queued/current state. */
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

extern GlobalState D_002F9E70;

void func_0B3270(void)
{
    int previous;
    if (D_002F9E70.hold != 0) {
        if (D_002F9E70.queued != 0)
            D_002F9E70.previous = D_002F9E70.queued;
    } else if (D_002F9E70.active != 0) {
        D_002F9E70.active = 0;
        D_002F9E70.next = 0;
    } else {
        D_002F9E70.next = D_002F9E70.current;
    }
    previous = D_002F9E70.previous;
    D_002F9E70.previous = 0;
    D_002F9E70.current = previous;
    D_002F9E70.queued = 0;
}
