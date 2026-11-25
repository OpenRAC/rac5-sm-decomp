/* LEVEL_22:0x0B69D8 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern char D_0015FF90;

struct Obj;
extern void func_10CB48(struct Obj *p);
extern int func_109980(int id);
extern void func_10CB98(struct Obj *p, int v);

void func_0B69D8(struct Obj *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA8A);
    D_0015FF84 = func_109980(0x327);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 0;
    func_10CB98(o, 0x18);
}
