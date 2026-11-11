/* LEVEL_15.REL:0x09CB18: update the global queued/current state. */
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

extern GlobalState D_00240270;

void func_09CB18(void)
{
    int previous;
    if (D_00240270.hold != 0) {
        if (D_00240270.queued != 0)
            D_00240270.previous = D_00240270.queued;
    } else if (D_00240270.active != 0) {
        D_00240270.active = 0;
        D_00240270.next = 0;
    } else {
        D_00240270.next = D_00240270.current;
    }
    previous = D_00240270.previous;
    D_00240270.previous = 0;
    D_00240270.current = previous;
    D_00240270.queued = 0;
}
