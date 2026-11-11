/* LEVEL_18:0x1550F8 -- placement copy of LEVEL_16_158C50.c: callback: while the object is in state 1, runs the puff emitter when the nearest target is within 576 units, then the follow-up pass. */
struct Vec {
    float x, y, z;
};

struct Obj {
    char pad0[0x30];
    struct Vec pos;
    char pad3C[9];
    unsigned char state;
};

extern struct Obj *func_111470(struct Vec *p, float *out);
extern void func_155330(struct Obj *o);
extern void func_155170(struct Obj *a0);

void func_1550F8(struct Obj *o)
{
    float dist;

    if (o->state == 1) {
        func_111470(&o->pos, &dist);
        if (dist < 576.0f)
            func_155330(o);
        func_155170(o);
    }
}
