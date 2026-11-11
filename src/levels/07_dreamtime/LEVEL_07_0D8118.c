/* LEVEL_07:0x0D8118 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00219838;
extern char D_00210D30[];
extern char D_0021956C;
extern int func_08A0F0(int a);
extern int func_0D8AC8(void);
extern void func_0D8080(int a);
extern int func_0B8080(int a);
extern void func_01AEE8(int a, int b);
extern void func_0D8028(int a);
extern int func_0BDD90(void);
extern void func_0CB528(int a);
extern int func_0BEAE0(int a);
extern int func_0BB708(Menu *m, int a);
extern int func_0B4B18(char *p);

void func_0D8118(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_08A0F0(0x6B10);
    if (func_0D8AC8()) {
        func_0D8080(flags);
    } else if (flags & 0x1008) {
        func_0B8080(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_00219838.items[D_00219838.cur]->enabled) {
            func_0B8080(1);
            if (D_00219838.items[D_00219838.cur]->kind == 0) {
cancel:
                func_0B8080(7);
                func_01AEE8(4, 0);
            } else {
                func_0B8080(6);
                it = D_00219838.items[D_00219838.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0021956C = 1;
                        func_0D8028(0x2A7);
                    } else if (k == 0x65) {
                        D_0021956C = 0;
                        func_0D8028(0x2A8);
                    } else if (k == 6) {
                        func_0CB528(func_0BDD90());
                        func_0BEAE0(6);
                    }
                }
            }
        }
    } else {
        func_0BB708(&D_00219838, flags);
    }
    D_00219838.result = func_0B4B18(D_00210D30);
}
