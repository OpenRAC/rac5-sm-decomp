/* LEVEL_09:0x0C57D8 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern char D_001EAA10;

struct Obj;
extern void func_12E610(struct Obj *p);
extern int func_12B448(int id);
extern void func_12E660(struct Obj *p, int v);

void func_0C57D8(struct Obj *o)
{
    func_12E610(o);
    D_001EAA00 = func_12B448(0xA8A);
    D_001EAA04 = func_12B448(0x327);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 0;
    func_12E660(o, 0x18);
}
