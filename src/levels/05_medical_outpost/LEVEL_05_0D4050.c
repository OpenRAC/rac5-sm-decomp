/* LEVEL_05:0x0D4050 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001F41C0;
extern char D_001EBDB0[];
extern unsigned char D_00318DA8;
extern int func_085978(int a);
extern int func_0B45C8(int a);
extern void func_019DC0(int a, int b);
extern int func_0B7C50(Menu *m, int a);
extern int func_0B1078(char *p);

void func_0D4050(void)
{
    int flags;

    flags = func_085978(0x6B10);
    if (flags & 0x1008) {
        func_0B45C8(0);
        func_0B45C8(7);
        func_019DC0(4, 0);
        D_00318DA8 = 5;
    } else if (flags & 0x4000) {
        if (D_001F41C0.items[D_001F41C0.cur]->enabled) {
            func_0B45C8(1);
            D_00318DA8 = D_001F41C0.cur;
            func_0B45C8(7);
            func_019DC0(4, 0);
        }
    } else {
        func_0B7C50(&D_001F41C0, flags);
    }
    D_001F41C0.result = func_0B1078(D_001EBDB0);
}
