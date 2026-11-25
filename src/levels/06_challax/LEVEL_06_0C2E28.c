/* LEVEL_06:0x0C2E28 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern char D_001EFB10;

struct Obj;
extern void func_12BD48(struct Obj *p);
extern int func_128B80(int id);
extern void func_12BD98(struct Obj *p, int v);

void func_0C2E28(struct Obj *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA8A);
    D_001EFB04 = func_128B80(0x327);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 0;
    func_12BD98(o, 0x18);
}
