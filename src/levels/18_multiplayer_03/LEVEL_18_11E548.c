/* LEVEL_18:0x11E548 -- placement copy of LEVEL_16_11F490.c: finds the first free slot of two and counts used ones; second function selects a slot and starts it. */
struct Slot {
    int pad0;
    char flag;
    char pad5[0x5F8 - 5];
};
struct Sel {
    char pad0[0x174];
    int cur;
};
extern struct Slot *D_001A2F38;
extern int D_001BD008;
extern int D_001BD00C;
extern int D_001BD010;
extern int D_001E0428;
extern int D_002E2184;
extern void func_120C48(void *p);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);

int func_11E548(void)
{
    struct Slot *p;
    int i;
    D_001BD008 = -1;
    D_001BD010 = 0;
    D_001BD00C = 0;
    p = D_001A2F38;
    for (i = 0; i < 2; i++) {
        if (p[i].flag == 0)
            D_001BD008 = i;
        else
            D_001BD00C++;
    }
    return D_001BD008;
}

void func_11E5B8(int slot)
{
    *(int *)(D_001E0428 + 0x174) = slot;
    func_120C48((char *)D_001A2F38 + (*(int *)(D_001E0428 + 0x174) * 0x5F8 + 4));
    func_0C5620(0, func_10DFE0(0x6E1), 0, 0);
    D_002E2184 = 0;
}
