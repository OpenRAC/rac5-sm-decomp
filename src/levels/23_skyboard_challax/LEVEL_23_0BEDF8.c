/* LEVEL_23:0x0BEDF8 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned char D_001D4010;
typedef struct Obj Obj;
extern void func_126DF0(Obj *o);
extern int func_123C28(int value);
extern void func_126E40(Obj *o, int value);

void func_0BEDF8(Obj *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA59);
    D_001D4004 = func_123C28(0x30B);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 1;
    func_126E40(o, 0x18);
}
