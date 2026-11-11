/* LEVEL_17:0x151BB8 -- placement copy of LEVEL_16_158C50.c: callback: while the object is in state 1, runs the puff emitter when the nearest target is within 576 units, then the follow-up pass. */
struct Vec {
    float x, y, z;
};

struct Obj {
    char pad0[0x30];
    struct Vec pos;
    char pad3C[9];
    unsigned char state;
};

extern struct Obj *func_111D38(struct Vec *p, float *out);
extern void func_151DF0(struct Obj *o);
extern void func_151C30(struct Obj *a0);

void func_151BB8(struct Obj *o)
{
    float dist;

    if (o->state == 1) {
        func_111D38(&o->pos, &dist);
        if (dist < 576.0f)
            func_151DF0(o);
        func_151C30(o);
    }
}
