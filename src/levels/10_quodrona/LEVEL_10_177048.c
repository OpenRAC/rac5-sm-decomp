/* LEVEL_10:0x177048 -- loads the default 28-byte parameter block into the object, starts it with mode 3 and rates 0 / 0.15, sets its timer to 60 and runs the follow-up. */
typedef struct Params {
    int w[7];
} Params;

typedef struct Obj {
    char pad0[0x34];
    float timer;
    char pad38[0x6C];
    Params params;
} Obj;

extern Params D_0022A4C8;
extern void func_1730A0(Obj *o, int mode, float a, float b);
extern void func_173850(Obj *o);

void func_177048(int unused, Obj *o)
{
    o->params = D_0022A4C8;
    func_1730A0(o, 3, 0.0f, 0.15f);
    o->timer = 60.0f;
    func_173850(o);
}
