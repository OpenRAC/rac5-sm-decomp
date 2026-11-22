/* LEVEL_08:0x0E0A60 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0024DD00;
extern char D_002458F0[];
extern unsigned char D_0037C168;
extern int func_090070(int a);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern int func_0C4598(Menu *m, int a);
extern int func_0BD750(char *p);

void func_0E0A60(void)
{
    int flags;

    flags = func_090070(0x6B10);
    if (flags & 0x1008) {
        func_0C0F10(0);
        func_0C0F10(7);
        func_01B1A0(4, 0);
        D_0037C168 = 5;
    } else if (flags & 0x4000) {
        if (D_0024DD00.items[D_0024DD00.cur]->enabled) {
            func_0C0F10(1);
            D_0037C168 = D_0024DD00.cur;
            func_0C0F10(7);
            func_01B1A0(4, 0);
        }
    } else {
        func_0C4598(&D_0024DD00, flags);
    }
    D_0024DD00.result = func_0BD750(D_002458F0);
}
