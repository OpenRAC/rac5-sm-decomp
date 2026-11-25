/* LEVEL_03:0x0C7E40 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned char D_00219290;
typedef struct Obj Obj;
extern void func_133A40(Obj *o);
extern int func_130878(int value);
extern void func_133A90(Obj *o, int value);

void func_0C7E40(Obj *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA59);
    D_00219284 = func_130878(0x30B);
    D_00219288 = func_130878(0x218);
    D_00219290 = 1;
    func_133A90(o, 0x18);
}
