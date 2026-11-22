/* LEVEL_08:0x0CF870 -- placement copy of LEVEL_01_0C4948.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00249918;
extern char D_002458F0[];
extern int func_090070(int a);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern int func_0C79A8(int a0);
extern int func_0C4598(Menu *m, int a);
extern int func_0BD750(char *p);

void func_0CF870(void)
{
    int flags;
    int k;

    flags = func_090070(0x6B10);
    if (flags & 0x1008) {
        func_0C0F10(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_00249918.items[D_00249918.cur]->enabled) {
            func_0C0F10(1);
            k = D_00249918.items[D_00249918.cur]->kind;
            if (k == 0) {
cancel:
                func_0C0F10(7);
                func_01B1A0(4, 0);
            } else {
                func_0C0F10(6);
                func_0C79A8(k);
            }
        }
    } else {
        func_0C4598(&D_00249918, flags);
    }
    D_00249918.result = func_0BD750(D_002458F0);
}
