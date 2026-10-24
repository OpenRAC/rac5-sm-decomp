/* LEVEL_22.REL:0x0017A8 -- the per-frame step of the counter: state 0 hands
   the rate to func_0016B0, state 1 integrates it into the level. */
typedef struct {
    float f_00;
    float f_04;
    char pad0[0x10 - 0x08];
    int f_10;
} Obj;

void func_0016B0(Obj *a0, float x, float rate);

void func_0017A8(Obj *a0, float x)
{
    switch (a0->f_10) {
    case 0:
        func_0016B0(a0, x, a0->f_04);
        break;
    case 1: {
        float rate = a0->f_04;
        float level = a0->f_00;

        a0->f_00 = level + x * rate;
        break;
    }
    }
}
