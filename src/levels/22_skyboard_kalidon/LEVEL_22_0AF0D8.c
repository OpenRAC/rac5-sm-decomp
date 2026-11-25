/* LEVEL_22:0x0AF0D8 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0015E048;
extern char D_0015BDB0[];
extern char D_0015DE64;
extern int func_079438(int a);
extern int func_10D2D0(void);
extern int func_0C4FA8(void);
extern void func_0AF020(void);
extern int func_0A4570(int a);
extern void func_016E40(int a, int b);
extern void func_0AEFC8(int a);
extern int func_0A7B50(Menu *m, int a);
extern int func_0A1138(char *p);

void func_0AF0D8(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_0015E048;
    flags = func_079438(0x6B10);
    func_10D2D0();
    if (func_0C4FA8()) {
        ((void (*)(int a))func_0AF020)(flags);
    } else if (flags & 0x1008) {
        func_0A4570(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0A4570(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0A4570(7);
                func_016E40(4, 0);
            } else {
                func_0A4570(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0015DE64 = 1;
                        func_0AEFC8(0x2A7);
                    } else if (k == 0x65) {
                        D_0015DE64 = 0;
                        func_0AEFC8(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0A7B50(m, flags);
    }
    m->result = func_0A1138(D_0015BDB0);
}
