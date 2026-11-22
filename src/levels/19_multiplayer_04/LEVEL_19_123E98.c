/* LEVEL_19:0x123E98 -- placement copy of LEVEL_16_123530.c: resets the two player slots, links the three record tables and clears the per-slot counters. */
struct Item {
    char pad_00[0x18];
};

struct Link {
    char pad_00[0x30];
    struct Item *item;
};

extern struct Item D_001BD228[];
extern struct Link D_001BD7F0;
extern struct Link D_001BD8D8;
extern struct Link D_001BD708;
extern int D_001BD6FC;
extern int D_001BD700;
extern int D_001BDA78[];
extern int D_001BDA80[];
extern int D_001BDA88[];
extern unsigned int D_001B5E04;
extern char D_001BDA90[];

extern void func_07B7C8(int a);
extern void func_079880(int a);
extern void func_079810(int a);
extern void func_1224F8(void *a);
extern void func_123688(int a);
extern void func_0A0DD8(char *a);

void func_123E98(void)
{
    unsigned int i;
    int j;
    unsigned int k;

    func_07B7C8(1);
    for (i = 0; i < 2; i++) {
        func_079880(i);
        func_079810(0x200);
    }
    func_079880(0);
    j = 0;
    func_1224F8(0);
    D_001BD6FC = D_001BD700;
    D_001BD708.item = &D_001BD228[0];
    D_001BD7F0.item = &D_001BD228[1];
    D_001BD8D8.item = &D_001BD228[2];
    do {
        D_001BDA78[j] = 0;
        D_001BDA80[j] = 0;
        for (k = 0; k < D_001B5E04; k++) {
            func_123688(j);
        }
        D_001BDA88[j] = 0;
        j++;
    } while (j < 2);
    func_0A0DD8(D_001BDA90);
}
