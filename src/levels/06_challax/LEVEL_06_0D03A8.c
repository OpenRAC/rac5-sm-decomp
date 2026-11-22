/* LEVEL_06:0x0D03A8 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001F3D40;
extern char D_001EB930[];
extern unsigned char D_00319C68;
extern int func_080E98(int a);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern int func_0B3FA8(Menu *m, int a);
extern int func_0AD2F8(char *p);

void func_0D03A8(void)
{
    int flags;

    flags = func_080E98(0x6B10);
    if (flags & 0x1008) {
        func_0B0848(0);
        func_0B0848(7);
        func_019028(4, 0);
        D_00319C68 = 5;
    } else if (flags & 0x4000) {
        if (D_001F3D40.items[D_001F3D40.cur]->enabled) {
            func_0B0848(1);
            D_00319C68 = D_001F3D40.cur;
            func_0B0848(7);
            func_019028(4, 0);
        }
    } else {
        func_0B3FA8(&D_001F3D40, flags);
    }
    D_001F3D40.result = func_0AD2F8(D_001EB930);
}
