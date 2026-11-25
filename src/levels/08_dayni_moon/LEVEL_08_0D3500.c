/* LEVEL_08:0x0D3500 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned char D_00249AD0;

struct Obj;
struct S;
extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int index);
extern void func_146C00(struct S *p, int v);

void func_0D3500(struct Obj *p)
{
    func_146BB0(p);
    D_00249AC0 = func_1439E8(0xA86);
    D_00249AC4 = func_1439E8(0x327);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 0;
    func_146C00((struct S *)p, 0x18);
}
