/* LEVEL_15:0x0B66F8 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0015A1B8;
extern char D_001516B0[];
extern char D_00159EEC;
extern int func_06C700(int a);
extern int func_0B70A8(void);
extern void func_0B6660(int a);
extern int func_096530(int a);
extern void func_016A10(int a, int b);
extern void func_0B6608(int a);
extern int func_09C378(void);
extern void func_0A9B10(int a);
extern int func_09D0C8(int a);
extern int func_099CF0(Menu *m, int a);
extern int func_093380(char *p);

void func_0B66F8(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_06C700(0x6B10);
    if (func_0B70A8()) {
        func_0B6660(flags);
    } else if (flags & 0x1008) {
        func_096530(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0015A1B8.items[D_0015A1B8.cur]->enabled) {
            func_096530(1);
            if (D_0015A1B8.items[D_0015A1B8.cur]->kind == 0) {
cancel:
                func_096530(7);
                func_016A10(4, 0);
            } else {
                func_096530(6);
                it = D_0015A1B8.items[D_0015A1B8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_00159EEC = 1;
                        func_0B6608(0x2A7);
                    } else if (k == 0x65) {
                        D_00159EEC = 0;
                        func_0B6608(0x2A8);
                    } else if (k == 6) {
                        func_0A9B10(func_09C378());
                        func_09D0C8(6);
                    }
                }
            }
        }
    } else {
        func_099CF0(&D_0015A1B8, flags);
    }
    D_0015A1B8.result = func_093380(D_001516B0);
}
