/* LEVEL_22.REL:0x0AA980: update the global queued/current state. */
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

extern GlobalState D_0027E5F0;

void func_0AA980(void)
{
    int previous;
    if (D_0027E5F0.hold != 0) {
        if (D_0027E5F0.queued != 0)
            D_0027E5F0.previous = D_0027E5F0.queued;
    } else if (D_0027E5F0.active != 0) {
        D_0027E5F0.active = 0;
        D_0027E5F0.next = 0;
    } else {
        D_0027E5F0.next = D_0027E5F0.current;
    }
    previous = D_0027E5F0.previous;
    D_0027E5F0.previous = 0;
    D_0027E5F0.current = previous;
    D_0027E5F0.queued = 0;
}
