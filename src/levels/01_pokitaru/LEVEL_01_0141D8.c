typedef struct {
    char  pad[0x04];
    float f04;
} Obj;

extern int func_014228(Obj *, float *, int b, float x);

void func_0141D8(Obj *o, float *p, int b, float x)
{
    float v;

    if (func_014228(o, &v, b, x) != 0)
        o->f04 = v;
    if (p != 0)
        *p = v;
}
