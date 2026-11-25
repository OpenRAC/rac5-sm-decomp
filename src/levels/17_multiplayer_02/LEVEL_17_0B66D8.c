/* LEVEL_17:0x0B66D8 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern char D_001A2288;

struct Obj;
extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int id);
extern void func_111310(struct Obj *p, int v);

void func_0B66D8(struct Obj *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA8A);
    D_001A227C = func_10E8A8(0x327);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 0;
    func_111310(o, 0x18);
}
