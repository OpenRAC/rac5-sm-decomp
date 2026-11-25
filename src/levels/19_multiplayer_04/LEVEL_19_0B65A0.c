/* LEVEL_19:0x0B65A0 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned char D_001AFE08;
typedef struct Obj Obj;
extern void func_1123E8(Obj *o);
extern int func_10F9D0(int value);
extern void func_112438(Obj *o, int value);

void func_0B65A0(Obj *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA59);
    D_001AFDFC = func_10F9D0(0x30B);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 1;
    func_112438(o, 0x18);
}
