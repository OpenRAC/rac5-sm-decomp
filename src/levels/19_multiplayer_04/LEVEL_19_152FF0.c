/* LEVEL_19:0x152FF0 -- placement copy of LEVEL_16_158C50.c: callback: while the object is in state 1, runs the puff emitter when the nearest target is within 576 units, then the follow-up pass. */
struct Vec {
    float x, y, z;
};

struct Obj {
    char pad0[0x30];
    struct Vec pos;
    char pad3C[9];
    unsigned char state;
};

extern struct Obj *func_112E60(struct Vec *p, float *out);
extern void func_153228(struct Obj *o);
extern void func_153068(struct Obj *a0);

void func_152FF0(struct Obj *o)
{
    float dist;

    if (o->state == 1) {
        func_112E60(&o->pos, &dist);
        if (dist < 576.0f)
            func_153228(o);
        func_153068(o);
    }
}
