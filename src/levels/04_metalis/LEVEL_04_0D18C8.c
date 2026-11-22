/* LEVEL_04:0x0D18C8 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0021B050;
extern char D_00215EF0[];
extern int func_08B2B8(int a);
extern int func_0BB828(int a);
extern void func_01A4A8(int a, int b);
extern int func_0C2298(int a0);
extern int func_0BEE88(Menu *m, int a);
extern int func_0B8068(char *p);

void func_0D18C8(void)
{
    int flags;
    int k;

    flags = func_08B2B8(0x6B10);
    if (flags & 8) {
        func_0BB828(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0BB828(0);
        func_0BB828(7);
        func_0C2298(3);
    } else if (flags & 0x4000) {
        if (D_0021B050.items[D_0021B050.cur]->enabled) {
            func_0BB828(1);
            k = D_0021B050.items[D_0021B050.cur]->kind;
            if (k == 0) {
cancel:
                func_0BB828(7);
                func_01A4A8(4, 0);
            } else {
                func_0BB828(6);
                func_0C2298(k);
            }
        }
    } else {
        func_0BEE88(&D_0021B050, flags);
    }
    D_0021B050.result = func_0B8068(D_00215EF0);
}
