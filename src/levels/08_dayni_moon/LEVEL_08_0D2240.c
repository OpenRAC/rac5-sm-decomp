/* LEVEL_08:0x0D2240 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00249AD8;
extern int D_00249ADC;
extern int D_00249AE0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_146BB0(struct Obj *p);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int value);

void func_0D2240(Obj2 *o)
{
    int *p = &o->f18;

    func_146BB0((struct Obj *)o);
    *p = 0;
    func_0E1F10(3, D_00249AD8, D_00249ADC, D_00249AE0);
    func_0E1F48(0xA);
}
