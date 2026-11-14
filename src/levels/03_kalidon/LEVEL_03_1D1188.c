/* LEVEL_03:0x1D1188 -- forwards its three arguments to the five-argument helper together with the address of the second word and the first word of the table the third argument points to. */
typedef struct Tab {
    char pad00[0x8];
    int f08;
} Tab;

typedef struct Obj {
    char pad00[0x54];
    Tab *f54;
} Obj;

extern void func_031228(void *a0, void *a1, Obj *a2, char *a3, int t0);

void func_1D1188(void *a0, void *a1, Obj *a2)
{
    Tab *t = a2->f54;

    func_031228(a0, a1, a2, (char *)t + 0x14, t->f08);
}
