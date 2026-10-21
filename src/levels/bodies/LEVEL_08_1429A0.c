/* LEVEL_08:0x1429A0 -- forwards four floats of a global object to a
   routine that takes twelve arguments. */
typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Obj;

extern Obj *D_24FDEC;

extern void func_088940(void *a0, Obj *a1, float f0, int i0, float f1, int i1,
                        float f2, int i2, float f3, int i3, int i4, int i5);

void func_1429A0(void *a0)
{
    Obj *p = D_24FDEC;

    if (p != 0) {
        func_088940(a0, p, p->f14, 0, p->f18, 0, p->f1C, 0, p->f20, 0, 0, 1);
    }
}
