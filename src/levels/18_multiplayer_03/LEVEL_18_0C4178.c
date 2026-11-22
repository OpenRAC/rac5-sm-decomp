/* LEVEL_18:0x0C4178 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001B4170;
extern char D_001ABF30[];
extern unsigned char D_0027B2E8;
extern int func_078F38(int a);
extern int func_0A40A8(int a);
extern void func_0181E0(int a, int b);
extern int func_0A76D0(Menu *m, int a);
extern int func_0A0430(char *p);

void func_0C4178(void)
{
    int flags;

    flags = func_078F38(0x6B10);
    if (flags & 0x1008) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0181E0(4, 0);
        D_0027B2E8 = 5;
    } else if (flags & 0x4000) {
        if (D_001B4170.items[D_001B4170.cur]->enabled) {
            func_0A40A8(1);
            D_0027B2E8 = D_001B4170.cur;
            func_0A40A8(7);
            func_0181E0(4, 0);
        }
    } else {
        func_0A76D0(&D_001B4170, flags);
    }
    D_001B4170.result = func_0A0430(D_001ABF30);
}
