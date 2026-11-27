/* LEVEL_15:0x103278 -- when the countdown has run out, adds a random fraction of the owner's period to it and re-aims at the shared target point. */
struct Cfg {
    char pad00[0x38];
    float f38;
};

struct Obj {
    char pad00[8];
    float timer;
    char pad0C[0x230];
    struct Cfg *cfg;
};

extern float D_002ECBA8[];
extern float func_020EB8(void);
extern void func_100910(struct Obj *o, float *target);

void func_103278(struct Obj *o)
{
    struct Cfg *cfg;
    float *target;

    cfg = o->cfg;
    if (o->timer <= 0.0f) {
        target = D_002ECBA8;
        o->timer = o->timer + cfg->f38 * func_020EB8();
        func_100910(o, target);
    }
}
