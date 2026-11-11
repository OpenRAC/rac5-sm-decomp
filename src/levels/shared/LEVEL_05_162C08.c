/* LEVEL_05:0x162C08 -- triggers every idle slot's callback, then randomizes the owner's height within a range. */

struct Slot_162C08 {
    int *obj;
    void (*cb)(void *o, int a1);
    char pad_08[0x18];
    unsigned char arg_20;
    char pad_21[3];
    int busy_24;
};

struct Rng_162C08 {
    char pad_00[4];
    float center;
    float range;
    char pad_0C[0x12];
    unsigned char flag_1E;
};

extern int rand(void);

int func_162C08(char *a0, struct Rng_162C08 *a1, struct Slot_162C08 *a2)
{
    int found;
    struct Slot_162C08 *e;
    unsigned int i;
    float lo;
    float hi;
    float span;
    float u;

    found = 0;
    for (i = 0; i < 8; i++) {
        e = &a2[i];
        if (e->obj != 0 && e->busy_24 == 0) {
            e->busy_24 = 1;
            found = 1;
            e->obj[0x64 / 4] &= ~0x20;
            e->obj[0x64 / 4] &= ~0x10;
            e->cb(e->obj, e->arg_20);
        }
    }
    if (found) {
        hi = a1->range;
        lo = -hi;
        span = hi - lo;
        u = (float)rand() * 4.656612873077393e-10f;
        *(float *)(a0 + 0x70) = a1->center + (lo + span * u);
        if (a1->flag_1E) {
            a0[0x46] = 1;
        }
    }
    return found;
}
