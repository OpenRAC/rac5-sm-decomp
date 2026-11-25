/* LEVEL_05:0x0C6600 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned char D_001EFF90;
typedef struct Obj Obj;
extern void func_130FF0(Obj *o);
extern int func_12DE28(int value);
extern void func_131040(Obj *o, int value);

void func_0C6600(Obj *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA59);
    D_001EFF84 = func_12DE28(0x30B);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 1;
    func_131040(o, 0x18);
}
