/* LEVEL_04:0x0DB960 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0021E9F8;
extern char D_00215EF0[];
extern char D_0021E72C;
extern int func_08B2B8(int a);
extern int func_0DC318(void);
extern void func_0DB8C8(int a);
extern int func_0BB828(int a);
extern void func_01A4A8(int a, int b);
extern void func_0DB870(int a);
extern int func_0C1540(void);
extern void func_0CECE0(int a);
extern int func_0C2298(int a);
extern int func_0BEE88(Menu *m, int a);
extern int func_0B8068(char *p);

void func_0DB960(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_08B2B8(0x6B10);
    if (func_0DC318()) {
        func_0DB8C8(flags);
    } else if (flags & 0x1008) {
        func_0BB828(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0021E9F8.items[D_0021E9F8.cur]->enabled) {
            func_0BB828(1);
            if (D_0021E9F8.items[D_0021E9F8.cur]->kind == 0) {
cancel:
                func_0BB828(7);
                func_01A4A8(4, 0);
            } else {
                func_0BB828(6);
                it = D_0021E9F8.items[D_0021E9F8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0021E72C = 1;
                        func_0DB870(0x2A7);
                    } else if (k == 0x65) {
                        D_0021E72C = 0;
                        func_0DB870(0x2A8);
                    } else if (k == 6) {
                        func_0CECE0(func_0C1540());
                        func_0C2298(6);
                    }
                }
            }
        }
    } else {
        func_0BEE88(&D_0021E9F8, flags);
    }
    D_0021E9F8.result = func_0B8068(D_00215EF0);
}
