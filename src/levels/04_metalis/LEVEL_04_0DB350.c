/* LEVEL_04:0x0DB350 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0021E300;
extern char D_00215EF0[];
extern unsigned char D_003476E8;
extern int func_08B2B8(int a);
extern int func_0BB828(int a);
extern void func_01A4A8(int a, int b);
extern int func_0BEE88(Menu *m, int a);
extern int func_0B8068(char *p);

void func_0DB350(void)
{
    int flags;

    flags = func_08B2B8(0x6B10);
    if (flags & 0x1008) {
        func_0BB828(0);
        func_0BB828(7);
        func_01A4A8(4, 0);
        D_003476E8 = 5;
    } else if (flags & 0x4000) {
        if (D_0021E300.items[D_0021E300.cur]->enabled) {
            func_0BB828(1);
            D_003476E8 = D_0021E300.cur;
            func_0BB828(7);
            func_01A4A8(4, 0);
        }
    } else {
        func_0BEE88(&D_0021E300, flags);
    }
    D_0021E300.result = func_0B8068(D_00215EF0);
}
