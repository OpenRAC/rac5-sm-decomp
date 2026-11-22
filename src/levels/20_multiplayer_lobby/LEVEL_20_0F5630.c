/* LEVEL_20:0x0F5630 -- placement copy of LEVEL_16_123530.c: resets the two player slots, links the three record tables and clears the per-slot counters. */
struct Item {
    char pad_00[0x18];
};

struct Link {
    char pad_00[0x30];
    struct Item *item;
};

extern struct Item D_0011E750[];
extern struct Link D_0011ED18;
extern struct Link D_0011EE00;
extern struct Link D_0011EC30;
extern int D_0011EC24;
extern int D_0011EC28;
extern int D_0011EFA0[];
extern int D_0011EFA8[];
extern int D_0011EFB0[];
extern unsigned int D_00117344;
extern char D_0011EFB8[];

extern void func_068F50(int a);
extern void func_067008(int a);
extern void func_066F98(int a);
extern void func_0F3C90(void *a);
extern void func_0F4E20(int a);
extern void func_08BC40(char *a);

void func_0F5630(void)
{
    unsigned int i;
    int j;
    unsigned int k;

    func_068F50(1);
    for (i = 0; i < 2; i++) {
        func_067008(i);
        func_066F98(0x200);
    }
    func_067008(0);
    j = 0;
    func_0F3C90(0);
    D_0011EC24 = D_0011EC28;
    D_0011EC30.item = &D_0011E750[0];
    D_0011ED18.item = &D_0011E750[1];
    D_0011EE00.item = &D_0011E750[2];
    do {
        D_0011EFA0[j] = 0;
        D_0011EFA8[j] = 0;
        for (k = 0; k < D_00117344; k++) {
            func_0F4E20(j);
        }
        D_0011EFB0[j] = 0;
        j++;
    } while (j < 2);
    func_08BC40(D_0011EFB8);
}
