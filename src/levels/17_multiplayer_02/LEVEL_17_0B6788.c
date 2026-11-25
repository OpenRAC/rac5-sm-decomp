/* LEVEL_17:0x0B6788 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned char D_001A2288;

struct Obj;
struct S;
extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int index);
extern void func_111310(struct S *p, int v);

void func_0B6788(struct Obj *p)
{
    func_1112C0(p);
    D_001A2278 = func_10E8A8(0xA86);
    D_001A227C = func_10E8A8(0x327);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 0;
    func_111310((struct S *)p, 0x18);
}
