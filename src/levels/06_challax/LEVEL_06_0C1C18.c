/* LEVEL_06:0x0C1C18 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001EFB18;
extern int D_001EFB1C;
extern int D_001EFB20;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_12BD48(struct Obj *p);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int value);

void func_0C1C18(Obj2 *o)
{
    int *p = &o->f18;

    func_12BD48((struct Obj *)o);
    *p = 0;
    func_0D1850(3, D_001EFB18, D_001EFB1C, D_001EFB20);
    func_0D1888(0xA);
}
