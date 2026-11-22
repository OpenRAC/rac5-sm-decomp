/* LEVEL_23:0x0C2E68 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D4F90;
extern char D_001CFE30[];
extern int func_07DEE0(int a);
extern int func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern int func_0B3820(int a0);
extern int func_0B0440(Menu *m, int a);
extern int func_0A9898(char *p);

void func_0C2E68(void)
{
    int flags;
    int k;

    flags = func_07DEE0(0x6B10);
    if (flags & 8) {
        func_0ACDE8(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0ACDE8(0);
        func_0ACDE8(7);
        func_0B3820(3);
    } else if (flags & 0x4000) {
        if (D_001D4F90.items[D_001D4F90.cur]->enabled) {
            func_0ACDE8(1);
            k = D_001D4F90.items[D_001D4F90.cur]->kind;
            if (k == 0) {
cancel:
                func_0ACDE8(7);
                func_019338(4, 0);
            } else {
                func_0ACDE8(6);
                func_0B3820(k);
            }
        }
    } else {
        func_0B0440(&D_001D4F90, flags);
    }
    D_001D4F90.result = func_0A9898(D_001CFE30);
}
