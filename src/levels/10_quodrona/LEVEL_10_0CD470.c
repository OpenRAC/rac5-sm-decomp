/* LEVEL_10:0x0CD470 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0020AB90;
extern char D_00205A30[];
extern int func_088388(int a);
extern int func_0B71F8(int a);
extern void func_019EA8(int a, int b);
extern int func_0BDDD0(int a0);
extern int func_0BA9F0(Menu *m, int a);
extern int func_0B3C90(char *p);

void func_0CD470(void)
{
    int flags;
    int k;

    flags = func_088388(0x6B10);
    if (flags & 8) {
        func_0B71F8(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0B71F8(0);
        func_0B71F8(7);
        func_0BDDD0(3);
    } else if (flags & 0x4000) {
        if (D_0020AB90.items[D_0020AB90.cur]->enabled) {
            func_0B71F8(1);
            k = D_0020AB90.items[D_0020AB90.cur]->kind;
            if (k == 0) {
cancel:
                func_0B71F8(7);
                func_019EA8(4, 0);
            } else {
                func_0B71F8(6);
                func_0BDDD0(k);
            }
        }
    } else {
        func_0BA9F0(&D_0020AB90, flags);
    }
    D_0020AB90.result = func_0B3C90(D_00205A30);
}
