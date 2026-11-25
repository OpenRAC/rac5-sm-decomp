/* LEVEL_17:0x0B5D18 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned char D_001A2288;

extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int a0);
extern void func_111310(struct S *p, int v);

void func_0B5D18(struct Obj *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA5E);
    D_001A227C = func_10E8A8(0x30A);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 1;
    func_111310((struct S *)o, 0x18);
}
