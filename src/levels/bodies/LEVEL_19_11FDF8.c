/* LEVEL_19:0x11FDF8 -- placement copy of LEVEL_16_11F490.c: finds the first free slot of two and counts used ones; second function selects a slot and starts it. */
struct Slot {
    int pad0;
    char flag;
    char pad5[0x5F8 - 5];
};
struct Sel {
    char pad0[0x174];
    int cur;
};
extern struct Slot *D_001A2C38;
extern int D_001BCD00;
extern int D_001BCD04;
extern int D_001BCD08;
extern int D_001E0228;
extern int D_002E1F84;
extern void func_1224F8(void *p);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);

int func_11FDF8(void)
{
    struct Slot *p;
    int i;
    D_001BCD00 = -1;
    D_001BCD08 = 0;
    D_001BCD04 = 0;
    p = D_001A2C38;
    for (i = 0; i < 2; i++) {
        if (p[i].flag == 0)
            D_001BCD00 = i;
        else
            D_001BCD04++;
    }
    return D_001BCD00;
}

void func_11FE68(int slot)
{
    *(int *)(D_001E0228 + 0x174) = slot;
    func_1224F8((char *)D_001A2C38 + (*(int *)(D_001E0228 + 0x174) * 0x5F8 + 4));
    func_0C5F20(0, func_10F9D0(0x6E1), 0, 0);
    D_002E1F84 = 0;
}
