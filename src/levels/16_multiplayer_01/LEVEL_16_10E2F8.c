/* LEVEL_16:0x10E2F8 -- hands the current object's four floats to func_073518. */
typedef struct {
    char pad[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

extern Obj *D_001B4A40;

extern void func_073518(int a0, Obj *a1, float x, float y, float z, float w,
                        int i1, int i2, int i3, int i4, int i5, int i6);

void func_10E2F8(int a0)
{
    Obj *p = D_001B4A40;

    if (p == 0)
        return;
    func_073518(a0, p, p->f_14, p->f_18, p->f_1C, p->f_20, 0, 0, 0, 0, 0, 1);
}
