/* LEVEL_16:0x0B5F88 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001AEC90;
extern int D_001AEC94;
extern int D_001AEC98;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_111D48(struct Obj *p);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int value);

void func_0B5F88(Obj2 *o)
{
    int *p = &o->f18;

    func_111D48((struct Obj *)o);
    *p = 0;
    func_0C6648(3, D_001AEC90, D_001AEC94, D_001AEC98);
    func_0C6680(0xA);
}
