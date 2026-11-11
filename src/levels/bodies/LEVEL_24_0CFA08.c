/* LEVEL_24:0x0CFA08 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D61B8;
extern char D_001CD6B0[];
extern char D_001D5EEC;
extern int func_0812C0(int a);
extern int func_0D03C0(void);
extern void func_0CF970(int a);
extern int func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern void func_0CF918(int a);
extern int func_0B55F0(void);
extern void func_0C2D90(int a);
extern int func_0B6348(int a);
extern int func_0B2F38(Menu *m, int a);
extern int func_0AC330(char *p);

void func_0CFA08(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_0812C0(0x6B10);
    if (func_0D03C0()) {
        func_0CF970(flags);
    } else if (flags & 0x1008) {
        func_0AF8B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001D61B8.items[D_001D61B8.cur]->enabled) {
            func_0AF8B0(1);
            if (D_001D61B8.items[D_001D61B8.cur]->kind == 0) {
cancel:
                func_0AF8B0(7);
                func_018E18(4, 0);
            } else {
                func_0AF8B0(6);
                it = D_001D61B8.items[D_001D61B8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001D5EEC = 1;
                        func_0CF918(0x2A7);
                    } else if (k == 0x65) {
                        D_001D5EEC = 0;
                        func_0CF918(0x2A8);
                    } else if (k == 6) {
                        func_0C2D90(func_0B55F0());
                        func_0B6348(6);
                    }
                }
            }
        }
    } else {
        func_0B2F38(&D_001D61B8, flags);
    }
    D_001D61B8.result = func_0AC330(D_001CD6B0);
}
