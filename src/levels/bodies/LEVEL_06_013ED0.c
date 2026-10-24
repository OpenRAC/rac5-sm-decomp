typedef struct {
    char pad[4];
    float v;
} Obj;

extern int func_013F28(Obj *a, float *buf, int c, int d, int e);

void f(Obj *a0, float *a1, int a2)
{
    float buf;

    if (func_013F28(a0, &buf, a2, 0x38, 0))
        a0->v = buf;
    if (a1)
        *a1 = buf;
}
