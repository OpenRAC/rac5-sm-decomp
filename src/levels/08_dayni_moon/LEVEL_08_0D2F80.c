/* LEVEL_08:0x0D2F80 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned char D_00249AD0;
typedef struct Obj Obj;
extern void func_146BB0(Obj *o);
extern int func_1439E8(int value);
extern void func_146C00(Obj *o, int value);

void func_0D2F80(Obj *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA59);
    D_00249AC4 = func_1439E8(0x30B);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 1;
    func_146C00(o, 0x18);
}
