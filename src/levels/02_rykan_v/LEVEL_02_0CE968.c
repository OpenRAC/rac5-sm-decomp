/* LEVEL_02:0x0CE968 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned char D_00215BD0;
typedef struct Obj Obj;
extern void func_13BA28(Obj *o);
extern int func_138860(int value);
extern void func_13BA78(Obj *o, int value);

void func_0CE968(Obj *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA59);
    D_00215BC4 = func_138860(0x30B);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 1;
    func_13BA78(o, 0x18);
}
