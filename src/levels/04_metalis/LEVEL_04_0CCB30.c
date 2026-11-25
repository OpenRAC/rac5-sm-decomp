/* LEVEL_04:0x0CCB30 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_0021A0D8;
extern int D_0021A0DC;
extern int D_0021A0E0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_141AF8(struct Obj *p);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int value);

void func_0CCB30(Obj2 *o)
{
    int *p = &o->f18;

    func_141AF8((struct Obj *)o);
    *p = 0;
    func_0DC800(3, D_0021A0D8, D_0021A0DC, D_0021A0E0);
    func_0DC838(0xA);
}
