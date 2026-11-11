/* LEVEL_18:0x10CFA8 -- same shape as LEVEL_08:0x1429A0, other module. */
typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Obj;

extern Obj *D_1B5EC0;

extern void func_072BC8(void *a0, Obj *a1, float f0, int i0, float f1, int i1,
                        float f2, int i2, float f3, int i3, int i4, int i5);

void func_10CFA8(void *a0)
{
    Obj *p = D_1B5EC0;

    if (p != 0) {
        func_072BC8(a0, p, p->f14, 0, p->f18, 0, p->f1C, 0, p->f20, 0, 0, 1);
    }
}
