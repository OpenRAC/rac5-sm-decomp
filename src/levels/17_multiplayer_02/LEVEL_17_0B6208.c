/* LEVEL_17:0x0B6208 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned char D_001A2288;
typedef struct Obj Obj;
extern void func_1112C0(Obj *o);
extern int func_10E8A8(int value);
extern void func_111310(Obj *o, int value);

void func_0B6208(Obj *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA59);
    D_001A227C = func_10E8A8(0x30B);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 1;
    func_111310(o, 0x18);
}
