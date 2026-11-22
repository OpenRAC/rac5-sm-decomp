/* LEVEL_22:0x0C3FE8 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001641C0;
extern char D_0015BDB0[];
extern unsigned char D_00282AA8;
extern int func_079438(int a);
extern int func_0A4570(int a);
extern void func_016E40(int a, int b);
extern int func_0A7B50(Menu *m, int a);
extern int func_0A1138(char *p);

void func_0C3FE8(void)
{
    int flags;

    flags = func_079438(0x6B10);
    if (flags & 0x1008) {
        func_0A4570(0);
        func_0A4570(7);
        func_016E40(4, 0);
        D_00282AA8 = 5;
    } else if (flags & 0x4000) {
        if (D_001641C0.items[D_001641C0.cur]->enabled) {
            func_0A4570(1);
            D_00282AA8 = D_001641C0.cur;
            func_0A4570(7);
            func_016E40(4, 0);
        }
    } else {
        func_0A7B50(&D_001641C0, flags);
    }
    D_001641C0.result = func_0A1138(D_0015BDB0);
}
