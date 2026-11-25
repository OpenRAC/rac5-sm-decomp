/* LEVEL_07:0x0CA4D8 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_138678(struct Obj *p);
extern int func_1354B0(int key);
extern void func_1386C8(struct S *p, int v);
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned char D_00214F10;

void func_0CA4D8(struct Obj *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA87);
    D_00214F04 = func_1354B0(0x327);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 0;
    func_1386C8((struct S *)o, 0x18);
}
