/* LEVEL_23:0x0B79C8 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001D20C8;
extern char D_001CFE30[];
extern char D_001D1EE4;
extern int func_07DEE0(int a);
extern int func_127570(void);
extern int func_0CD898(void);
extern void func_0B7910(void);
extern int func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern void func_0B78B8(int a);
extern int func_0B0440(Menu *m, int a);
extern int func_0A9898(char *p);

void func_0B79C8(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001D20C8;
    flags = func_07DEE0(0x6B10);
    func_127570();
    if (func_0CD898()) {
        ((void (*)(int a))func_0B7910)(flags);
    } else if (flags & 0x1008) {
        func_0ACDE8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0ACDE8(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0ACDE8(7);
                func_019338(4, 0);
            } else {
                func_0ACDE8(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001D1EE4 = 1;
                        func_0B78B8(0x2A7);
                    } else if (k == 0x65) {
                        D_001D1EE4 = 0;
                        func_0B78B8(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B0440(m, flags);
    }
    m->result = func_0A9898(D_001CFE30);
}
