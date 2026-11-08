/* LEVEL_18.REL:0x0AA8B0: update the global queued/current state. */
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

extern GlobalState D_00276CF0;

void func_0AA8B0(void)
{
    int previous;
    if (D_00276CF0.hold != 0) {
        if (D_00276CF0.queued != 0)
            D_00276CF0.previous = D_00276CF0.queued;
    } else if (D_00276CF0.active != 0) {
        D_00276CF0.active = 0;
        D_00276CF0.next = 0;
    } else {
        D_00276CF0.next = D_00276CF0.current;
    }
    previous = D_00276CF0.previous;
    D_00276CF0.previous = 0;
    D_00276CF0.current = previous;
    D_00276CF0.queued = 0;
}
