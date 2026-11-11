/* LEVEL_03.REL:0x0BC2B8: update the global queued/current state. */
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

extern GlobalState D_003438B0;

void func_0BC2B8(void)
{
    int previous;
    if (D_003438B0.hold != 0) {
        if (D_003438B0.queued != 0)
            D_003438B0.previous = D_003438B0.queued;
    } else if (D_003438B0.active != 0) {
        D_003438B0.active = 0;
        D_003438B0.next = 0;
    } else {
        D_003438B0.next = D_003438B0.current;
    }
    previous = D_003438B0.previous;
    D_003438B0.previous = 0;
    D_003438B0.current = previous;
    D_003438B0.queued = 0;
}
