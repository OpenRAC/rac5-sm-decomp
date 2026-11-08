/* LEVEL_07.REL:0x0BE530: update the global queued/current state. */
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

extern GlobalState D_0033E330;

void func_0BE530(void)
{
    int previous;
    if (D_0033E330.hold != 0) {
        if (D_0033E330.queued != 0)
            D_0033E330.previous = D_0033E330.queued;
    } else if (D_0033E330.active != 0) {
        D_0033E330.active = 0;
        D_0033E330.next = 0;
    } else {
        D_0033E330.next = D_0033E330.current;
    }
    previous = D_0033E330.previous;
    D_0033E330.previous = 0;
    D_0033E330.current = previous;
    D_0033E330.queued = 0;
}
