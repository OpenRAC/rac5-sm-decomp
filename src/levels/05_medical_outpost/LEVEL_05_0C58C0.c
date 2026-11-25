/* LEVEL_05:0x0C58C0 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001EFF98;
extern int D_001EFF9C;
extern int D_001EFFA0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_130FF0(struct Obj *p);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int value);

void func_0C58C0(Obj2 *o)
{
    int *p = &o->f18;

    func_130FF0((struct Obj *)o);
    *p = 0;
    func_0D54F8(3, D_001EFF98, D_001EFF9C, D_001EFFA0);
    func_0D5530(0xA);
}
