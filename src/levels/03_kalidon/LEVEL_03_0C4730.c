/* LEVEL_03:0x0C4730 -- placement copy of LEVEL_01_0C4948.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_002190D8;
extern char D_002150B0[];
extern int func_087E78(int a);
extern int func_0B5E08(int a);
extern void func_01A590(int a, int b);
extern int func_0BC868(int a0);
extern int func_0B9490(Menu *m, int a);
extern int func_0B28A0(char *p);

void func_0C4730(void)
{
    int flags;
    int k;

    flags = func_087E78(0x6B10);
    if (flags & 0x1008) {
        func_0B5E08(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_002190D8.items[D_002190D8.cur]->enabled) {
            func_0B5E08(1);
            k = D_002190D8.items[D_002190D8.cur]->kind;
            if (k == 0) {
cancel:
                func_0B5E08(7);
                func_01A590(4, 0);
            } else {
                func_0B5E08(6);
                func_0BC868(k);
            }
        }
    } else {
        func_0B9490(&D_002190D8, flags);
    }
    D_002190D8.result = func_0B28A0(D_002150B0);
}
