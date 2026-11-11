/* LEVEL_16:0x0C57B0 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001B33E8;
extern char D_001AAAB0[];
extern char D_001B311C;
extern int func_0795B8(int a);
extern int func_0C6160(void);
extern void func_0C5718(int a);
extern int func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern void func_0C56C0(int a);
extern int func_0AAE20(void);
extern void func_0B8910(int a);
extern int func_0ABF08(int a0);
extern int func_0A86F8(Menu *m, int a);
extern int func_0A1420(char *p);

void func_0C57B0(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_0795B8(0x6B10);
    if (func_0C6160()) {
        func_0C5718(flags);
    } else if (flags & 0x1008) {
        func_0A50B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001B33E8.items[D_001B33E8.cur]->enabled) {
            func_0A50B0(1);
            if (D_001B33E8.items[D_001B33E8.cur]->kind == 0) {
cancel:
                func_0A50B0(7);
                func_018B98(4, 0);
            } else {
                func_0A50B0(6);
                it = D_001B33E8.items[D_001B33E8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001B311C = 1;
                        func_0C56C0(0x2A7);
                    } else if (k == 0x65) {
                        D_001B311C = 0;
                        func_0C56C0(0x2A8);
                    } else if (k == 6) {
                        func_0B8910(func_0AAE20());
                        func_0ABF08(6);
                    }
                }
            }
        }
    } else {
        func_0A86F8(&D_001B33E8, flags);
    }
    D_001B33E8.result = func_0A1420(D_001AAAB0);
}
