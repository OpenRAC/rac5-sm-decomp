/* LEVEL_21:0x0B60E8 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00159AC0;
extern char D_001516B0[];
extern unsigned char D_00244728;
extern int func_06C700(int a);
extern int func_096530(int a);
extern void func_016A10(int a, int b);
extern int func_099CF0(Menu *m, int a);
extern int func_093380(char *p);

void func_0B60E8(void)
{
    int flags;

    flags = func_06C700(0x6B10);
    if (flags & 0x1008) {
        func_096530(0);
        func_096530(7);
        func_016A10(4, 0);
        D_00244728 = 5;
    } else if (flags & 0x4000) {
        if (D_00159AC0.items[D_00159AC0.cur]->enabled) {
            func_096530(1);
            D_00244728 = D_00159AC0.cur;
            func_096530(7);
            func_016A10(4, 0);
        }
    } else {
        func_099CF0(&D_00159AC0, flags);
    }
    D_00159AC0.result = func_093380(D_001516B0);
}
