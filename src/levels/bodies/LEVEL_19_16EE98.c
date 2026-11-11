/* LEVEL_19:0x16EE98 -- placement copy of LEVEL_16_16DFE0.c: tests whether a nearby object has any unresolved link slot. */
typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[0xB8];
    int ready;
    int owner;
} Obj;

typedef struct Slot {
    char pad0[0x3C];
    int state;
} Slot;

extern int func_037638(Obj *o);
extern int func_0212B0(Obj *o, int i);
extern Slot *func_021D08(int i, int owner);

int func_16EE98(Obj *a, Obj *b)
{
    float *pa;
    float *pb;
    float dx, dy, dz;
    unsigned int i;

    if (b->ready == 0) {
        return 0;
    }
    if (func_037638(b) != 0) {
        return 0;
    }
    pa = a->pos;
    pb = b->pos;
    dx = b->pos[0] - a->pos[0];
    dy = pb[1] - pa[1];
    dz = pb[2] - pa[2];
    if (dx * dx + dy * dy + dz * dz >= 9.0f) {
        return 0;
    }
    for (i = 1; i < 16; i++) {
        if (func_0212B0(b, i) != 0) {
            if (func_021D08(i, b->owner)->state != 2) {
                return 1;
            }
        }
    }
    return 0;
}
