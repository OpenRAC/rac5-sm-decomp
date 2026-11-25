/* LEVEL_05:0x0C6AD0 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern char D_001EFF90;

struct Obj;
extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int id);
extern void func_131040(struct Obj *p, int v);

void func_0C6AD0(struct Obj *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA8A);
    D_001EFF84 = func_12DE28(0x327);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 0;
    func_131040(o, 0x18);
}
