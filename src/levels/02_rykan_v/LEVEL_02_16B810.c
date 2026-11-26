/* LEVEL_02:0x16B810 -- tells whether the actor's state is none of 0x15, 0x17 and 0x18. */
typedef struct {
    char pad_00[0x45];
    unsigned char state;
} Actor;

long long func_16B810(Actor *a)
{
    int state = a->state;
    long long r = 0;
    int t;

    if (state != 0x15 && state != 0x17) {
        t = state != 0x18;
        r = t;
    }
    return r;
}
