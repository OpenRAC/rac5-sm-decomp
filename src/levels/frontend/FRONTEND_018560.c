/* FRONTEND:0x018560 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern char D_00030490;

struct Obj;
extern void func_022938(struct Obj *p);
extern int func_01F778(int id);
extern void func_022988(struct Obj *p, int v);

void func_018560(struct Obj *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA8A);
    D_00030484 = func_01F778(0x327);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 0;
    func_022988(o, 0x18);
}
