/* FRONTEND:0x0184B0 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_022938(struct Obj *p);
extern int func_01F778(int key);
extern void func_022988(struct S *p, int v);
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned char D_00030490;

void func_0184B0(struct Obj *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA87);
    D_00030484 = func_01F778(0x327);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 0;
    func_022988((struct S *)o, 0x18);
}
