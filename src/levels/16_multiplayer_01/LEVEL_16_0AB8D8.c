/* LEVEL_16.REL:0x0AB8D8: update the global queued/current state. */
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

extern GlobalState D_00276970;

void func_0AB8D8(void)
{
    int previous;
    if (D_00276970.hold != 0) {
        if (D_00276970.queued != 0)
            D_00276970.previous = D_00276970.queued;
    } else if (D_00276970.active != 0) {
        D_00276970.active = 0;
        D_00276970.next = 0;
    } else {
        D_00276970.next = D_00276970.current;
    }
    previous = D_00276970.previous;
    D_00276970.previous = 0;
    D_00276970.current = previous;
    D_00276970.queued = 0;
}
