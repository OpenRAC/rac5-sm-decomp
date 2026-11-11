/* LEVEL_16:0x11F490 -- finds the first free slot of two and counts used ones; second function selects a slot and starts it. */
struct Slot {
    int pad0;
    char flag;
    char pad5[0x5F8 - 5];
};
struct Sel {
    char pad0[0x174];
    int cur;
};
extern struct Slot *D_001A1AB8;
extern int D_001BBB88;
extern int D_001BBB8C;
extern int D_001BBB90;
extern int D_001E00A8;
extern int D_002E1E04;
extern void func_121B90(void *p);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);

int func_11F490(void)
{
    struct Slot *p;
    int i;
    D_001BBB88 = -1;
    D_001BBB90 = 0;
    D_001BBB8C = 0;
    p = D_001A1AB8;
    for (i = 0; i < 2; i++) {
        if (p[i].flag == 0)
            D_001BBB88 = i;
        else
            D_001BBB8C++;
    }
    return D_001BBB88;
}

void func_11F500(int slot)
{
    *(int *)(D_001E00A8 + 0x174) = slot;
    func_121B90((char *)D_001A1AB8 + (*(int *)(D_001E00A8 + 0x174) * 0x5F8 + 4));
    func_0C6648(0, func_10F330(0x6E1), 0, 0);
    D_002E1E04 = 0;
}
