/* LEVEL_17:0x0BAC70 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001A3040;
extern char D_0019E0B0[];
extern int func_07A030(int a);
extern int func_0A4590(int a);
extern void func_018518(int a, int b);
extern int func_0AB448(int a0);
extern int func_0A7C38(Menu *m, int a);
extern int func_0A0918(char *p);

void func_0BAC70(void)
{
    int flags;
    int k;

    flags = func_07A030(0x6B10);
    if (flags & 8) {
        func_0A4590(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        func_0AB448(3);
    } else if (flags & 0x4000) {
        if (D_001A3040.items[D_001A3040.cur]->enabled) {
            func_0A4590(1);
            k = D_001A3040.items[D_001A3040.cur]->kind;
            if (k == 0) {
cancel:
                func_0A4590(7);
                func_018518(4, 0);
            } else {
                func_0A4590(6);
                func_0AB448(k);
            }
        }
    } else {
        func_0A7C38(&D_001A3040, flags);
    }
    D_001A3040.result = func_0A0918(D_0019E0B0);
}
