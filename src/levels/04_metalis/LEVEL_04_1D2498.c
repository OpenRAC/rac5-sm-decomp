/* LEVEL_04:0x1D2498 -- placement copy of LEVEL_01_1BF5D8.c: forwards its three arguments to the five-argument helper together with the address of the second word and the first word of the table the third argument points to. */
typedef struct Tab {
    char pad00[0x40];
    int f40;
} Tab;

typedef struct Obj {
    char pad00[0x54];
    Tab *f54;
} Obj;

extern void func_031040(void *a0, void *a1, Obj *a2, char *a3, int t0);

void func_1D2498(void *a0, void *a1, Obj *a2)
{
    Tab *t = a2->f54;

    func_031040(a0, a1, a2, (char *)t + 4, t->f40);
}
