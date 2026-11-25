/* LEVEL_20:0x0A16C8 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern char D_00111368;

struct Obj;
extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int id);
extern void func_0E4B80(struct Obj *p, int v);

void func_0A16C8(struct Obj *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA8A);
    D_0011135C = func_0E2118(0x327);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 0;
    func_0E4B80(o, 0x18);
}
