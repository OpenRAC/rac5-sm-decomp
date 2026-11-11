/* LEVEL_16:0x158C50 -- callback: while the object is in state 1, runs the puff emitter when the nearest target is within 576 units, then the follow-up pass. */
struct Vec {
    float x, y, z;
};

struct Obj {
    char pad0[0x30];
    struct Vec pos;
    char pad3C[9];
    unsigned char state;
};

extern struct Obj *func_1127C0(struct Vec *p, float *out);
extern void func_158E88(struct Obj *o);
extern void func_158CC8(struct Obj *a0);

void func_158C50(struct Obj *o)
{
    float dist;

    if (o->state == 1) {
        func_1127C0(&o->pos, &dist);
        if (dist < 576.0f)
            func_158E88(o);
        func_158CC8(o);
    }
}
