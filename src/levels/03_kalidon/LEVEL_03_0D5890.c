/* LEVEL_03:0x0D5890 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0021D4C0;
extern char D_002150B0[];
extern unsigned char D_00347D68;
extern int func_087E78(int a);
extern int func_0B5E08(int a);
extern void func_01A590(int a, int b);
extern int func_0B9490(Menu *m, int a);
extern int func_0B28A0(char *p);

void func_0D5890(void)
{
    int flags;

    flags = func_087E78(0x6B10);
    if (flags & 0x1008) {
        func_0B5E08(0);
        func_0B5E08(7);
        func_01A590(4, 0);
        D_00347D68 = 5;
    } else if (flags & 0x4000) {
        if (D_0021D4C0.items[D_0021D4C0.cur]->enabled) {
            func_0B5E08(1);
            D_00347D68 = D_0021D4C0.cur;
            func_0B5E08(7);
            func_01A590(4, 0);
        }
    } else {
        func_0B9490(&D_0021D4C0, flags);
    }
    D_0021D4C0.result = func_0B28A0(D_002150B0);
}
