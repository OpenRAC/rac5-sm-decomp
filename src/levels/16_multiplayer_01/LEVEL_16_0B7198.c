/* LEVEL_16:0x0B7198 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern char D_001AEC88;

struct Obj;
extern void func_111D48(struct Obj *p);
extern int func_10F330(int id);
extern void func_111D98(struct Obj *p, int v);

void func_0B7198(struct Obj *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA8A);
    D_001AEC7C = func_10F330(0x327);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 0;
    func_111D98(o, 0x18);
}
