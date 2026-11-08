/* LEVEL_05.REL:0x0BAA78: update the global queued/current state. */
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

extern GlobalState D_003148F0;

void func_0BAA78(void)
{
    int previous;
    if (D_003148F0.hold != 0) {
        if (D_003148F0.queued != 0)
            D_003148F0.previous = D_003148F0.queued;
    } else if (D_003148F0.active != 0) {
        D_003148F0.active = 0;
        D_003148F0.next = 0;
    } else {
        D_003148F0.next = D_003148F0.current;
    }
    previous = D_003148F0.previous;
    D_003148F0.previous = 0;
    D_003148F0.current = previous;
    D_003148F0.queued = 0;
}
