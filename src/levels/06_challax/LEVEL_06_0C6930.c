/* LEVEL_06:0x0C6930 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001F0A90;
extern char D_001EB930[];
extern int func_080E98(int a);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern int func_0B7380(int a0);
extern int func_0B3FA8(Menu *m, int a);
extern int func_0AD2F8(char *p);

void func_0C6930(void)
{
    int flags;
    int k;

    flags = func_080E98(0x6B10);
    if (flags & 8) {
        func_0B0848(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0B0848(0);
        func_0B0848(7);
        func_0B7380(3);
    } else if (flags & 0x4000) {
        if (D_001F0A90.items[D_001F0A90.cur]->enabled) {
            func_0B0848(1);
            k = D_001F0A90.items[D_001F0A90.cur]->kind;
            if (k == 0) {
cancel:
                func_0B0848(7);
                func_019028(4, 0);
            } else {
                func_0B0848(6);
                func_0B7380(k);
            }
        }
    } else {
        func_0B3FA8(&D_001F0A90, flags);
    }
    D_001F0A90.result = func_0AD2F8(D_001EB930);
}
