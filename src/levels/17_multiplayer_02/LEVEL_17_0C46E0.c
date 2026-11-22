/* LEVEL_17:0x0C46E0 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001A62F0;
extern char D_0019E0B0[];
extern unsigned char D_0026C268;
extern int func_07A030(int a);
extern int func_0A4590(int a);
extern void func_018518(int a, int b);
extern int func_0A7C38(Menu *m, int a);
extern int func_0A0918(char *p);

void func_0C46E0(void)
{
    int flags;

    flags = func_07A030(0x6B10);
    if (flags & 0x1008) {
        func_0A4590(0);
        func_0A4590(7);
        func_018518(4, 0);
        D_0026C268 = 5;
    } else if (flags & 0x4000) {
        if (D_001A62F0.items[D_001A62F0.cur]->enabled) {
            func_0A4590(1);
            D_0026C268 = D_001A62F0.cur;
            func_0A4590(7);
            func_018518(4, 0);
        }
    } else {
        func_0A7C38(&D_001A62F0, flags);
    }
    D_001A62F0.result = func_0A0918(D_0019E0B0);
}
