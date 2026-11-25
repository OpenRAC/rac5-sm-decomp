/* FRONTEND:0x017B90 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned char D_00030490;

extern void func_022938(struct Obj *p);
extern int func_01F778(int a0);
extern void func_022988(struct S *p, int v);

void func_017B90(struct Obj *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA5E);
    D_00030484 = func_01F778(0x30A);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 1;
    func_022988((struct S *)o, 0x18);
}
