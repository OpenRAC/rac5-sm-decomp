/* LEVEL_22:0x0C45F8 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001648B8;
extern char D_0015BDB0[];
extern char D_001645EC;
extern int func_079438(int a);
extern int func_0C4FA8(void);
extern void func_0C4560(int a);
extern int func_0A4570(int a);
extern void func_016E40(int a, int b);
extern void func_0C4508(int a);
extern int func_0AA1D8(void);
extern void func_0B7978(int a);
extern int func_0AAF30(int a);
extern int func_0A7B50(Menu *m, int a);
extern int func_0A1138(char *p);

void func_0C45F8(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_079438(0x6B10);
    if (func_0C4FA8()) {
        func_0C4560(flags);
    } else if (flags & 0x1008) {
        func_0A4570(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001648B8.items[D_001648B8.cur]->enabled) {
            func_0A4570(1);
            if (D_001648B8.items[D_001648B8.cur]->kind == 0) {
cancel:
                func_0A4570(7);
                func_016E40(4, 0);
            } else {
                func_0A4570(6);
                it = D_001648B8.items[D_001648B8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001645EC = 1;
                        func_0C4508(0x2A7);
                    } else if (k == 0x65) {
                        D_001645EC = 0;
                        func_0C4508(0x2A8);
                    } else if (k == 6) {
                        func_0B7978(func_0AA1D8());
                        func_0AAF30(6);
                    }
                }
            }
        }
    } else {
        func_0A7B50(&D_001648B8, flags);
    }
    D_001648B8.result = func_0A1138(D_0015BDB0);
}
