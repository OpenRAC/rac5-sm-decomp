/* LEVEL_20:0x0A11F8 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned char D_00111368;
typedef struct Obj Obj;
extern void func_0E4B30(Obj *o);
extern int func_0E2118(int value);
extern void func_0E4B80(Obj *o, int value);

void func_0A11F8(Obj *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA59);
    D_0011135C = func_0E2118(0x30B);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 1;
    func_0E4B80(o, 0x18);
}
