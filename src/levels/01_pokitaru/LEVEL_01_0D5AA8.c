/* LEVEL_01:0x0D5AA8 -- handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00204E40;
extern char D_001FCA30[];
extern unsigned char D_0032CEE8;
extern int func_088020(int a);
extern int func_0B6020(int a);
extern void func_01A828(int a, int b);
extern int func_0B96A8(Menu *m, int a);
extern int func_0B2AB8(char *p);

void func_0D5AA8(void)
{
    int flags;

    flags = func_088020(0x6B10);
    if (flags & 0x1008) {
        func_0B6020(0);
        func_0B6020(7);
        func_01A828(4, 0);
        D_0032CEE8 = 5;
    } else if (flags & 0x4000) {
        if (D_00204E40.items[D_00204E40.cur]->enabled) {
            func_0B6020(1);
            D_0032CEE8 = D_00204E40.cur;
            func_0B6020(7);
            func_01A828(4, 0);
        }
    } else {
        func_0B96A8(&D_00204E40, flags);
    }
    D_00204E40.result = func_0B2AB8(D_001FCA30);
}
