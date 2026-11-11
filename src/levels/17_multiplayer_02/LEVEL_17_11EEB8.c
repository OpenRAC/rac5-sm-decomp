/* LEVEL_17:0x11EEB8 -- placement copy of LEVEL_16_11F490.c: finds the first free slot of two and counts used ones; second function selects a slot and starts it. */
struct Slot {
    int pad0;
    char flag;
    char pad5[0x5F8 - 5];
};
struct Sel {
    char pad0[0x174];
    int cur;
};
extern struct Slot *D_001950B8;
extern int D_001AF180;
extern int D_001AF184;
extern int D_001AF188;
extern int D_001D13A8;
extern int D_002D3104;
extern void func_1215B8(void *p);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);

int func_11EEB8(void)
{
    struct Slot *p;
    int i;
    D_001AF180 = -1;
    D_001AF188 = 0;
    D_001AF184 = 0;
    p = D_001950B8;
    for (i = 0; i < 2; i++) {
        if (p[i].flag == 0)
            D_001AF180 = i;
        else
            D_001AF184++;
    }
    return D_001AF180;
}

void func_11EF28(int slot)
{
    *(int *)(D_001D13A8 + 0x174) = slot;
    func_1215B8((char *)D_001950B8 + (*(int *)(D_001D13A8 + 0x174) * 0x5F8 + 4));
    func_0C5B88(0, func_10E8A8(0x6E1), 0, 0);
    D_002D3104 = 0;
}
