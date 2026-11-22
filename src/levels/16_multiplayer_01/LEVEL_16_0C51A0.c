/* LEVEL_16:0x0C51A0 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001B2CF0;
extern char D_001AAAB0[];
extern unsigned char D_0027AF68;
extern int func_0795B8(int a);
extern int func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern int func_0A86F8(Menu *m, int a);
extern int func_0A1420(char *p);

void func_0C51A0(void)
{
    int flags;

    flags = func_0795B8(0x6B10);
    if (flags & 0x1008) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_018B98(4, 0);
        D_0027AF68 = 5;
    } else if (flags & 0x4000) {
        if (D_001B2CF0.items[D_001B2CF0.cur]->enabled) {
            func_0A50B0(1);
            D_0027AF68 = D_001B2CF0.cur;
            func_0A50B0(7);
            func_018B98(4, 0);
        }
    } else {
        func_0A86F8(&D_001B2CF0, flags);
    }
    D_001B2CF0.result = func_0A1420(D_001AAAB0);
}
