/* LEVEL_04:0x0CD870 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned char D_0021A0D0;
typedef struct Obj Obj;
extern void func_141AF8(Obj *o);
extern int func_13E930(int value);
extern void func_141B48(Obj *o, int value);

void func_0CD870(Obj *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA59);
    D_0021A0C4 = func_13E930(0x30B);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 1;
    func_141B48(o, 0x18);
}
