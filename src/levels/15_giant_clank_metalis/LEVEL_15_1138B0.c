/* LEVEL_15:0x1138B0 -- while the object's timer float is not positive, advances it by a random fraction of the controller's step and runs the follow-up pass. */
typedef struct {
    char pad0[0x78];
    float f78;
} Ctl;

typedef struct {
    char pad0[8];
    float f8;
    char padC[0x254 - 0xC];
    Ctl *ctl;
} Obj;

extern float D_002ECBA8[];
extern float func_020EB8(void);
extern void func_110C28(Obj *o, float *target);

void func_1138B0(Obj *o)
{
    Ctl *c = o->ctl;

    if (o->f8 <= 0.0f) {
        float *t = D_002ECBA8;

        o->f8 = o->f8 + c->f78 * func_020EB8();
        func_110C28(o, t);
    }
}
