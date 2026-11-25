/* LEVEL_22:0x0B57C8 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_0015FF98;
extern int D_0015FF9C;
extern int D_0015FFA0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_10CB48(struct Obj *p);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int value);

void func_0B57C8(Obj2 *o)
{
    int *p = &o->f18;

    func_10CB48((struct Obj *)o);
    *p = 0;
    func_0C5490(3, D_0015FF98, D_0015FF9C, D_0015FFA0);
    func_0C54C8(0xA);
}
