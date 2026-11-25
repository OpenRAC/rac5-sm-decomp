/* LEVEL_02:0x0CEEE8 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned char D_00215BD0;

struct Obj;
struct S;
extern void func_13BA28(struct Obj *p);
extern int func_138860(int index);
extern void func_13BA78(struct S *p, int v);

void func_0CEEE8(struct Obj *p)
{
    func_13BA28(p);
    D_00215BC0 = func_138860(0xA86);
    D_00215BC4 = func_138860(0x327);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 0;
    func_13BA78((struct S *)p, 0x18);
}
