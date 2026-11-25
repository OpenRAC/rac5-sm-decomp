/* LEVEL_17:0x0AF620 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001A0340;
extern char D_0019E0B0[];
extern char D_001A015C;
extern int func_07A030(int a);
extern int func_125290(void);
extern int func_0C56A0(void);
extern void func_0AF568(void);
extern int func_0A4590(int a);
extern void func_018518(int a, int b);
extern void func_0AF510(int a);
extern int func_0A7C38(Menu *m, int a);
extern int func_0A0918(char *p);

void func_0AF620(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001A0340;
    flags = func_07A030(0x6B10);
    func_125290();
    if (func_0C56A0()) {
        ((void (*)(int a))func_0AF568)(flags);
    } else if (flags & 0x1008) {
        func_0A4590(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0A4590(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0A4590(7);
                func_018518(4, 0);
            } else {
                func_0A4590(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001A015C = 1;
                        func_0AF510(0x2A7);
                    } else if (k == 0x65) {
                        D_001A015C = 0;
                        func_0AF510(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0A7C38(m, flags);
    }
    m->result = func_0A0918(D_0019E0B0);
}
