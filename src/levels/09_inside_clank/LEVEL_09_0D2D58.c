/* LEVEL_09:0x0D2D58 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001EEC40;
extern char D_001E6830[];
extern unsigned char D_00314668;
extern int func_0849D8(int a);
extern int func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern int func_0B6958(Menu *m, int a);
extern int func_0AFD68(char *p);

void func_0D2D58(void)
{
    int flags;

    flags = func_0849D8(0x6B10);
    if (flags & 0x1008) {
        func_0B32D0(0);
        func_0B32D0(7);
        func_019C18(4, 0);
        D_00314668 = 5;
    } else if (flags & 0x4000) {
        if (D_001EEC40.items[D_001EEC40.cur]->enabled) {
            func_0B32D0(1);
            D_00314668 = D_001EEC40.cur;
            func_0B32D0(7);
            func_019C18(4, 0);
        }
    } else {
        func_0B6958(&D_001EEC40, flags);
    }
    D_001EEC40.result = func_0AFD68(D_001E6830);
}
