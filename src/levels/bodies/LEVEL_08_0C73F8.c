/* LEVEL_08.REL:0x0C73F8: update the global queued/current state. */
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

extern GlobalState D_00377CB0;

void func_0C73F8(void)
{
    int previous;
    if (D_00377CB0.hold != 0) {
        if (D_00377CB0.queued != 0)
            D_00377CB0.previous = D_00377CB0.queued;
    } else if (D_00377CB0.active != 0) {
        D_00377CB0.active = 0;
        D_00377CB0.next = 0;
    } else {
        D_00377CB0.next = D_00377CB0.current;
    }
    previous = D_00377CB0.previous;
    D_00377CB0.previous = 0;
    D_00377CB0.current = previous;
    D_00377CB0.queued = 0;
}
