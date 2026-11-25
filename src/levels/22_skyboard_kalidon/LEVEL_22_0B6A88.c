/* LEVEL_22:0x0B6A88 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned char D_0015FF90;

struct Obj;
struct S;
extern void func_10CB48(struct Obj *p);
extern int func_109980(int index);
extern void func_10CB98(struct S *p, int v);

void func_0B6A88(struct Obj *p)
{
    func_10CB48(p);
    D_0015FF80 = func_109980(0xA86);
    D_0015FF84 = func_109980(0x327);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 0;
    func_10CB98((struct S *)p, 0x18);
}
