/* LEVEL_21:0x0AC678 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00156810;
extern char D_001516B0[];
extern int func_06C700(int a);
extern int func_096530(int a);
extern void func_016A10(int a, int b);
extern int func_09D0C8(int a0);
extern int func_099CF0(Menu *m, int a);
extern int func_093380(char *p);

void func_0AC678(void)
{
    int flags;
    int k;

    flags = func_06C700(0x6B10);
    if (flags & 8) {
        func_096530(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_096530(0);
        func_096530(7);
        func_09D0C8(3);
    } else if (flags & 0x4000) {
        if (D_00156810.items[D_00156810.cur]->enabled) {
            func_096530(1);
            k = D_00156810.items[D_00156810.cur]->kind;
            if (k == 0) {
cancel:
                func_096530(7);
                func_016A10(4, 0);
            } else {
                func_096530(6);
                func_09D0C8(k);
            }
        }
    } else {
        func_099CF0(&D_00156810, flags);
    }
    D_00156810.result = func_093380(D_001516B0);
}
