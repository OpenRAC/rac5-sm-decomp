/* LEVEL_23:0x0BB6E8 -- placement copy of LEVEL_01_0C4948.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D3E58;
extern char D_001CFE30[];
extern int func_07DEE0(int a);
extern int func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern int func_0B3820(int a0);
extern int func_0B0440(Menu *m, int a);
extern int func_0A9898(char *p);

void func_0BB6E8(void)
{
    int flags;
    int k;

    flags = func_07DEE0(0x6B10);
    if (flags & 0x1008) {
        func_0ACDE8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001D3E58.items[D_001D3E58.cur]->enabled) {
            func_0ACDE8(1);
            k = D_001D3E58.items[D_001D3E58.cur]->kind;
            if (k == 0) {
cancel:
                func_0ACDE8(7);
                func_019338(4, 0);
            } else {
                func_0ACDE8(6);
                func_0B3820(k);
            }
        }
    } else {
        func_0B0440(&D_001D3E58, flags);
    }
    D_001D3E58.result = func_0A9898(D_001CFE30);
}
