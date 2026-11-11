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

extern GlobalState D_0033FF30;

void func_0C2DE0(void)
{
    int previous;
    if (D_0033FF30.hold != 0) {
        if (D_0033FF30.queued != 0)
            D_0033FF30.previous = D_0033FF30.queued;
    } else if (D_0033FF30.active != 0) {
        D_0033FF30.active = 0;
        D_0033FF30.next = 0;
    } else {
        D_0033FF30.next = D_0033FF30.current;
    }
    previous = D_0033FF30.previous;
    D_0033FF30.previous = 0;
    D_0033FF30.current = previous;
    D_0033FF30.queued = 0;
}
