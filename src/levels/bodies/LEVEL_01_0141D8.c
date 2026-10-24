typedef struct {
    char  pad[0x04];
    float f04;
} Obj;

extern int func_014228(Obj *, float *);

void func_0141D8(Obj *o, float *p)
{
    float v;

    if (func_014228(o, &v) != 0)
        o->f04 = v;
    if (p != 0)
        *p = v;
}
