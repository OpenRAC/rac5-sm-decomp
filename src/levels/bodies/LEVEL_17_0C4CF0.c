/* LEVEL_17:0x0C4CF0 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001A69E8;
extern char D_0019E0B0[];
extern char D_001A671C;
extern int func_07A030(int a);
extern int func_0C56A0(void);
extern void func_0C4C58(int a);
extern int func_0A4590(int a);
extern void func_018518(int a, int b);
extern void func_0C4C00(int a);
extern int func_0AA360(void);
extern void func_0B7E50(int a);
extern int func_0AB448(int a);
extern int func_0A7C38(Menu *m, int a);
extern int func_0A0918(char *p);

void func_0C4CF0(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_07A030(0x6B10);
    if (func_0C56A0()) {
        func_0C4C58(flags);
    } else if (flags & 0x1008) {
        func_0A4590(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001A69E8.items[D_001A69E8.cur]->enabled) {
            func_0A4590(1);
            if (D_001A69E8.items[D_001A69E8.cur]->kind == 0) {
cancel:
                func_0A4590(7);
                func_018518(4, 0);
            } else {
                func_0A4590(6);
                it = D_001A69E8.items[D_001A69E8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001A671C = 1;
                        func_0C4C00(0x2A7);
                    } else if (k == 0x65) {
                        D_001A671C = 0;
                        func_0C4C00(0x2A8);
                    } else if (k == 6) {
                        func_0B7E50(func_0AA360());
                        func_0AB448(6);
                    }
                }
            }
        }
    } else {
        func_0A7C38(&D_001A69E8, flags);
    }
    D_001A69E8.result = func_0A0918(D_0019E0B0);
}
