/* LEVEL_23:0x0CCEE8 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D8938;
extern char D_001CFE30[];
extern char D_001D866C;
extern int func_07DEE0(int a);
extern int func_0CD898(void);
extern void func_0CCE50(int a);
extern int func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern void func_0CCDF8(int a);
extern int func_0B2AC8(void);
extern void func_0C0268(int a);
extern int func_0B3820(int a0);
extern int func_0B0440(Menu *m, int a);
extern int func_0A9898(char *p);

void func_0CCEE8(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_07DEE0(0x6B10);
    if (func_0CD898()) {
        func_0CCE50(flags);
    } else if (flags & 0x1008) {
        func_0ACDE8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001D8938.items[D_001D8938.cur]->enabled) {
            func_0ACDE8(1);
            if (D_001D8938.items[D_001D8938.cur]->kind == 0) {
cancel:
                func_0ACDE8(7);
                func_019338(4, 0);
            } else {
                func_0ACDE8(6);
                it = D_001D8938.items[D_001D8938.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001D866C = 1;
                        func_0CCDF8(0x2A7);
                    } else if (k == 0x65) {
                        D_001D866C = 0;
                        func_0CCDF8(0x2A8);
                    } else if (k == 6) {
                        func_0C0268(func_0B2AC8());
                        func_0B3820(6);
                    }
                }
            }
        }
    } else {
        func_0B0440(&D_001D8938, flags);
    }
    D_001D8938.result = func_0A9898(D_001CFE30);
}
