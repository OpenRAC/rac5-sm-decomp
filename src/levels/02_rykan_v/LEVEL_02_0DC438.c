/* LEVEL_02:0x0DC438 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00219E00;
extern char D_002119F0[];
extern unsigned char D_003443E8;
extern int func_08E950(int a);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern int func_0BFFB8(Menu *m, int a);
extern int func_0B93C8(char *p);

void func_0DC438(void)
{
    int flags;

    flags = func_08E950(0x6B10);
    if (flags & 0x1008) {
        func_0BC930(0);
        func_0BC930(7);
        func_01B188(4, 0);
        D_003443E8 = 5;
    } else if (flags & 0x4000) {
        if (D_00219E00.items[D_00219E00.cur]->enabled) {
            func_0BC930(1);
            D_003443E8 = D_00219E00.cur;
            func_0BC930(7);
            func_01B188(4, 0);
        }
    } else {
        func_0BFFB8(&D_00219E00, flags);
    }
    D_00219E00.result = func_0B93C8(D_002119F0);
}
