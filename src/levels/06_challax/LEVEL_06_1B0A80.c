/* LEVEL_06:0x1B0A80 -- forwards its three arguments to the five-argument helper together with the address of the second word and the first word of the table the third argument points to. */
typedef struct Tab {
    char pad00[0x3C];
    int w3C;
} Tab;

typedef struct Obj {
    char pad00[0x54];
    Tab *tab;
} Obj;

extern void func_02FA38(void *a0, void *a1, Obj *a2, char *a3, int t0);

void func_1B0A80(void *a0, void *a1, Obj *a2)
{
    Tab *t = a2->tab;

    func_02FA38(a0, a1, a2, (char *)t + 4, t->w3C);
}
