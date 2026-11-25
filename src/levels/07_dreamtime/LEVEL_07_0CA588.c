/* LEVEL_07:0x0CA588 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern char D_00214F10;

struct Obj;
extern void func_138678(struct Obj *p);
extern int func_1354B0(int id);
extern void func_1386C8(struct Obj *p, int v);

void func_0CA588(struct Obj *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA8A);
    D_00214F04 = func_1354B0(0x327);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 0;
    func_1386C8(o, 0x18);
}
