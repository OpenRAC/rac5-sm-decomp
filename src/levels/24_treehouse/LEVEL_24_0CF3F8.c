/* LEVEL_24:0x0CF3F8 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D5AC0;
extern char D_001CD6B0[];
extern unsigned char D_002F8DA8;
extern int func_0812C0(int a);
extern int func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern int func_0B2F38(Menu *m, int a);
extern int func_0AC330(char *p);

void func_0CF3F8(void)
{
    int flags;

    flags = func_0812C0(0x6B10);
    if (flags & 0x1008) {
        func_0AF8B0(0);
        func_0AF8B0(7);
        func_018E18(4, 0);
        D_002F8DA8 = 5;
    } else if (flags & 0x4000) {
        if (D_001D5AC0.items[D_001D5AC0.cur]->enabled) {
            func_0AF8B0(1);
            D_002F8DA8 = D_001D5AC0.cur;
            func_0AF8B0(7);
            func_018E18(4, 0);
        }
    } else {
        func_0B2F38(&D_001D5AC0, flags);
    }
    D_001D5AC0.result = func_0AC330(D_001CD6B0);
}
