/* LEVEL_07:0x0C9BC8 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned char D_00214F10;

extern void func_138678(struct Obj *p);
extern int func_1354B0(int a0);
extern void func_1386C8(struct S *p, int v);

void func_0C9BC8(struct Obj *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA5E);
    D_00214F04 = func_1354B0(0x30A);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 1;
    func_1386C8((struct S *)o, 0x18);
}
