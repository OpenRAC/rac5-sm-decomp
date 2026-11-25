/* LEVEL_03:0x0C83C0 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned char D_00219290;

struct Obj;
struct S;
extern void func_133A40(struct Obj *p);
extern int func_130878(int index);
extern void func_133A90(struct S *p, int v);

void func_0C83C0(struct Obj *p)
{
    func_133A40(p);
    D_00219280 = func_130878(0xA86);
    D_00219284 = func_130878(0x327);
    D_00219288 = func_130878(0x218);
    D_00219290 = 0;
    func_133A90((struct S *)p, 0x18);
}
