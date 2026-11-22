/* LEVEL_20:0x0AF6D0 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001153D0;
extern char D_0010D190[];
extern unsigned char D_0019E7A8;
extern int func_067228(int a);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern int func_092C28(Menu *m, int a);
extern int func_08BB18(char *p);

void func_0AF6D0(void)
{
    int flags;

    flags = func_067228(0x6B10);
    if (flags & 0x1008) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_016950(4, 0);
        D_0019E7A8 = 5;
    } else if (flags & 0x4000) {
        if (D_001153D0.items[D_001153D0.cur]->enabled) {
            func_08F6B0(1);
            D_0019E7A8 = D_001153D0.cur;
            func_08F6B0(7);
            func_016950(4, 0);
        }
    } else {
        func_092C28(&D_001153D0, flags);
    }
    D_001153D0.result = func_08BB18(D_0010D190);
}
