/* LEVEL_15:0x0FCE88 -- pushes an entry into a three-slot ring and updates its counters. */
struct Slot {
    int f00;
    float f04;
    float f08;
    char f0C[0x58 - 0x0C];
};

struct Q {
    struct Slot slot[3];
    unsigned int f108;
    unsigned int f10C;
};

char *func_0FCE88(struct Q *a0, int a1, float a2)
{
    struct Slot *s;

    if (a0->f10C == 3) {
        a0->f108 = (a0->f108 + 1) % 3;
        a0->slot[a0->f108].f04 = 1.0f;
        a0->slot[a0->f108].f08 = 0.0f;
        a0->f10C = a0->f10C - 1;
    }
    s = &a0->slot[(a0->f108 + a0->f10C) % 3];
    s->f00 = a1;
    s->f08 = a2;
    s->f04 = 0.0f;
    a0->f10C = a0->f10C + 1;
    return s->f0C;
}
