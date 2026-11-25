/* LEVEL_01:0x0C8058 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;
typedef struct Obj Obj;
extern void func_135678(Obj *o);
extern int func_1324B0(int value);
extern void func_1356C8(Obj *o, int value);

void func_0C8058(Obj *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA59);
    D_00200C04 = func_1324B0(0x30B);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 1;
    func_1356C8(o, 0x18);
}
