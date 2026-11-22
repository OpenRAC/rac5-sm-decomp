/* LEVEL_01:0x0CC030 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00201B90;
extern char D_001FCA30[];
extern int func_088020(int a);
extern int func_0B6020(int a);
extern void func_01A828(int a, int b);
extern int func_0BCA80(int a0);
extern int func_0B96A8(Menu *m, int a);
extern int func_0B2AB8(char *p);

void func_0CC030(void)
{
    int flags;
    int k;

    flags = func_088020(0x6B10);
    if (flags & 8) {
        func_0B6020(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0B6020(0);
        func_0B6020(7);
        func_0BCA80(3);
    } else if (flags & 0x4000) {
        if (D_00201B90.items[D_00201B90.cur]->enabled) {
            func_0B6020(1);
            k = D_00201B90.items[D_00201B90.cur]->kind;
            if (k == 0) {
cancel:
                func_0B6020(7);
                func_01A828(4, 0);
            } else {
                func_0B6020(6);
                func_0BCA80(k);
            }
        }
    } else {
        func_0B96A8(&D_00201B90, flags);
    }
    D_00201B90.result = func_0B2AB8(D_001FCA30);
}
