/* LEVEL_16:0x123530 -- resets the two player slots, links the three record tables and clears the per-slot counters. */
struct Item {
    char pad_00[0x18];
};

struct Link {
    char pad_00[0x30];
    struct Item *item;
};

extern struct Item D_001BC0B0[];
extern struct Link D_001BC678;
extern struct Link D_001BC760;
extern struct Link D_001BC590;
extern int D_001BC584;
extern int D_001BC588;
extern int D_001BC900[];
extern int D_001BC908[];
extern int D_001BC910[];
extern unsigned int D_001B4C84;
extern char D_001BC918[];

extern void func_07B2E0(int a);
extern void func_079398(int a);
extern void func_079328(int a);
extern void func_121B90(void *a);
extern void func_122D20(int a);
extern void func_0A1548(char *a);

void func_123530(void)
{
    unsigned int i;
    int j;
    unsigned int k;

    func_07B2E0(1);
    for (i = 0; i < 2; i++) {
        func_079398(i);
        func_079328(0x200);
    }
    func_079398(0);
    j = 0;
    func_121B90(0);
    D_001BC584 = D_001BC588;
    D_001BC590.item = &D_001BC0B0[0];
    D_001BC678.item = &D_001BC0B0[1];
    D_001BC760.item = &D_001BC0B0[2];
    do {
        D_001BC900[j] = 0;
        D_001BC908[j] = 0;
        for (k = 0; k < D_001B4C84; k++) {
            func_122D20(j);
        }
        D_001BC910[j] = 0;
        j++;
    } while (j < 2);
    func_0A1548(D_001BC918);
}
