/* LEVEL_09:0x0C4E18 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned char D_001EAA10;

extern void func_12E610(struct Obj *p);
extern int func_12B448(int a0);
extern void func_12E660(struct S *p, int v);

void func_0C4E18(struct Obj *o)
{
    func_12E610(o);
    D_001EAA00 = func_12B448(0xA5E);
    D_001EAA04 = func_12B448(0x30A);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 1;
    func_12E660((struct S *)o, 0x18);
}
