/* LEVEL_09:0x0C45C8 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001EAA18;
extern int D_001EAA1C;
extern int D_001EAA20;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_12E610(struct Obj *p);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int value);

void func_0C45C8(Obj2 *o)
{
    int *p = &o->f18;

    func_12E610((struct Obj *)o);
    *p = 0;
    func_0D4200(3, D_001EAA18, D_001EAA1C, D_001EAA20);
    func_0D4238(0xA);
}
