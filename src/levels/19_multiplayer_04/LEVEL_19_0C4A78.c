/* LEVEL_19:0x0C4A78 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001B3E70;
extern char D_001ABC30[];
extern unsigned char D_0027B0E8;
extern int func_079AA0(int a);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern int func_0A7FD0(Menu *m, int a);
extern int func_0A0CB0(char *p);

void func_0C4A78(void)
{
    int flags;

    flags = func_079AA0(0x6B10);
    if (flags & 0x1008) {
        func_0A4928(0);
        func_0A4928(7);
        func_018898(4, 0);
        D_0027B0E8 = 5;
    } else if (flags & 0x4000) {
        if (D_001B3E70.items[D_001B3E70.cur]->enabled) {
            func_0A4928(1);
            D_0027B0E8 = D_001B3E70.cur;
            func_0A4928(7);
            func_018898(4, 0);
        }
    } else {
        func_0A7FD0(&D_001B3E70, flags);
    }
    D_001B3E70.result = func_0A0CB0(D_001ABC30);
}
