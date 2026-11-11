/* LEVEL_02:0x0DCA48 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0021A4F8;
extern char D_002119F0[];
extern char D_0021A22C;
extern int func_08E950(int a);
extern int func_0DD3F8(void);
extern void func_0DC9B0(int a);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern void func_0DC958(int a);
extern int func_0C2640(void);
extern void func_0CFDD8(int a);
extern int func_0C3390(int a);
extern int func_0BFFB8(Menu *m, int a);
extern int func_0B93C8(char *p);

void func_0DCA48(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_08E950(0x6B10);
    if (func_0DD3F8()) {
        func_0DC9B0(flags);
    } else if (flags & 0x1008) {
        func_0BC930(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0021A4F8.items[D_0021A4F8.cur]->enabled) {
            func_0BC930(1);
            if (D_0021A4F8.items[D_0021A4F8.cur]->kind == 0) {
cancel:
                func_0BC930(7);
                func_01B188(4, 0);
            } else {
                func_0BC930(6);
                it = D_0021A4F8.items[D_0021A4F8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0021A22C = 1;
                        func_0DC958(0x2A7);
                    } else if (k == 0x65) {
                        D_0021A22C = 0;
                        func_0DC958(0x2A8);
                    } else if (k == 6) {
                        func_0CFDD8(func_0C2640());
                        func_0C3390(6);
                    }
                }
            }
        }
    } else {
        func_0BFFB8(&D_0021A4F8, flags);
    }
    D_0021A4F8.result = func_0B93C8(D_002119F0);
}
