/* LEVEL_04:0x13D938 -- hands the current object's four floats to func_083E30. */
typedef struct {
    char pad[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

extern Obj *D_00220350;

extern void func_083E30(int a0, Obj *a1, float x, float y, float z, float w,
                        int i1, int i2, int i3, int i4, int i5, int i6);

void func_13D938(int a0)
{
    Obj *p = D_00220350;

    if (p == 0)
        return;
    func_083E30(a0, p, p->f_14, p->f_18, p->f_1C, p->f_20, 0, 0, 0, 0, 0, 1);
}
