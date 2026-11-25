/* LEVEL_01:0x0C7B68 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;

extern void func_135678(struct Obj *p);
extern int func_1324B0(int a0);
extern void func_1356C8(struct S *p, int v);

void func_0C7B68(struct Obj *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA5E);
    D_00200C04 = func_1324B0(0x30A);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 1;
    func_1356C8((struct S *)o, 0x18);
}
