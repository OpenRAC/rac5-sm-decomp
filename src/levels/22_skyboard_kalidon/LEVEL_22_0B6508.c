/* LEVEL_22:0x0B6508 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned char D_0015FF90;
typedef struct Obj Obj;
extern void func_10CB48(Obj *o);
extern int func_109980(int value);
extern void func_10CB98(Obj *o, int value);

void func_0B6508(Obj *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA59);
    D_0015FF84 = func_109980(0x30B);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 1;
    func_10CB98(o, 0x18);
}
