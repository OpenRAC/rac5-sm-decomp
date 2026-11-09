/* LEVEL_20:0x0F1590 -- placement copy of LEVEL_16_11F490.c: finds the first free slot of two and counts used ones; second function selects a slot and starts it. */
struct Slot {
    int pad0;
    char flag;
    char pad5[0x5F8 - 5];
};
struct Sel {
    char pad0[0x174];
    int cur;
};
extern struct Slot *D_00104198;
extern int D_0011E228;
extern int D_0011E22C;
extern int D_0011E230;
extern int D_00137A28;
extern int D_00205344;
extern void func_0F3C90(void *p);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);

int func_0F1590(void)
{
    struct Slot *p;
    int i;
    D_0011E228 = -1;
    D_0011E230 = 0;
    D_0011E22C = 0;
    p = D_00104198;
    for (i = 0; i < 2; i++) {
        if (p[i].flag == 0)
            D_0011E228 = i;
        else
            D_0011E22C++;
    }
    return D_0011E228;
}

void func_0F1600(int slot)
{
    *(int *)(D_00137A28 + 0x174) = slot;
    func_0F3C90((char *)D_00104198 + (*(int *)(D_00137A28 + 0x174) * 0x5F8 + 4));
    func_0B0B78(0, func_0E2118(0x6E1), 0, 0);
    D_00205344 = 0;
}
