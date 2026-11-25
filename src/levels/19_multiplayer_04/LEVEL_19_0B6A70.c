/* LEVEL_19:0x0B6A70 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern char D_001AFE08;

struct Obj;
extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int id);
extern void func_112438(struct Obj *p, int v);

void func_0B6A70(struct Obj *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA8A);
    D_001AFDFC = func_10F9D0(0x327);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 0;
    func_112438(o, 0x18);
}
