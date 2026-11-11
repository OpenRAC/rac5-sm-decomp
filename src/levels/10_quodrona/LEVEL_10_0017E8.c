/* LEVEL_10.REL:0x0017E8 -- advances the slot in mode 0, integrates it in mode 1. */
typedef struct { float f_00; float f_04; char pad[0x10 - 0x08]; int f_10; } Obj;
extern void func_0016F0(Obj *a0, float f12, float f13);
void func_0017E8(Obj *a0, float f)
{
    switch (a0->f_10) {
    case 0:
        func_0016F0(a0, f, a0->f_04);
        break;
    case 1:
        a0->f_00 = a0->f_00 + f * a0->f_04;
        break;
    }
}
