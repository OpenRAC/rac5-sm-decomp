/* LEVEL_18:0x1225E8 -- placement copy of LEVEL_16_123530.c: resets the two player slots, links the three record tables and clears the per-slot counters. */
struct Item {
    char pad_00[0x18];
};

struct Link {
    char pad_00[0x30];
    struct Item *item;
};

extern struct Item D_001BD530[];
extern struct Link D_001BDAF8;
extern struct Link D_001BDBE0;
extern struct Link D_001BDA10;
extern int D_001BDA04;
extern int D_001BDA08;
extern int D_001BDD80[];
extern int D_001BDD88[];
extern int D_001BDD90[];
extern unsigned int D_001B6104;
extern char D_001BDD98[];

extern void func_07AC60(int a);
extern void func_078D18(int a);
extern void func_078CA8(int a);
extern void func_120C48(void *a);
extern void func_121DD8(int a);
extern void func_0A0558(char *a);

void func_1225E8(void)
{
    unsigned int i;
    int j;
    unsigned int k;

    func_07AC60(1);
    for (i = 0; i < 2; i++) {
        func_078D18(i);
        func_078CA8(0x200);
    }
    func_078D18(0);
    j = 0;
    func_120C48(0);
    D_001BDA04 = D_001BDA08;
    D_001BDA10.item = &D_001BD530[0];
    D_001BDAF8.item = &D_001BD530[1];
    D_001BDBE0.item = &D_001BD530[2];
    do {
        D_001BDD80[j] = 0;
        D_001BDD88[j] = 0;
        for (k = 0; k < D_001B6104; k++) {
            func_121DD8(j);
        }
        D_001BDD90[j] = 0;
        j++;
    } while (j < 2);
    func_0A0558(D_001BDD98);
}
