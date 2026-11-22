/* LEVEL_24:0x0BE210 -- placement copy of LEVEL_01_0C4948.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D16D8;
extern char D_001CD6B0[];
extern int func_0812C0(int a);
extern int func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern int func_0B6348(int a0);
extern int func_0B2F38(Menu *m, int a);
extern int func_0AC330(char *p);

void func_0BE210(void)
{
    int flags;
    int k;

    flags = func_0812C0(0x6B10);
    if (flags & 0x1008) {
        func_0AF8B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001D16D8.items[D_001D16D8.cur]->enabled) {
            func_0AF8B0(1);
            k = D_001D16D8.items[D_001D16D8.cur]->kind;
            if (k == 0) {
cancel:
                func_0AF8B0(7);
                func_018E18(4, 0);
            } else {
                func_0AF8B0(6);
                func_0B6348(k);
            }
        }
    } else {
        func_0B2F38(&D_001D16D8, flags);
    }
    D_001D16D8.result = func_0AC330(D_001CD6B0);
}
