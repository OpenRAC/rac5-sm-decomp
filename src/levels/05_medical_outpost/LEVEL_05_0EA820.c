typedef struct {
    char pad0[0x14];
    float *p14;
    float f18;
    int i1C;
} Obj;

extern void func_094B08(Obj *, void *, int);

void func_0EA820(Obj *a0, void *a1, float *a2)
{
    func_094B08(a0, a1, 1);
    a0->p14 = a2;
    a0->f18 = 1.0f / a2[0];
    a0->i1C = 0;
}
