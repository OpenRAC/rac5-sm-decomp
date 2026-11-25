/* LEVEL_17:0x0B5598 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern char D_001A2288;

struct Obj {
    char pad00[0x10];
};

extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int id);
extern void func_111310(struct Obj *p, int v);

void func_0B5598(struct Obj *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA85);
    D_001A227C = func_10E8A8(0x30A);
    D_001A2280 = func_10E8A8(0x219);
    D_001A2288 = 0;
    func_111310(o, 0x18);
}
