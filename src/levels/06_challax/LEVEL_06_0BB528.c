/* LEVEL_06:0x0BB528 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001EDBC8;
extern char D_001EB930[];
extern char D_001ED9E4;
extern int func_080E98(int a);
extern int func_12C4C8(void);
extern int func_0D1368(void);
extern void func_0BB470(void);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern void func_0BB418(int a);
extern int func_0B3FA8(Menu *m, int a);
extern int func_0AD2F8(char *p);

void func_0BB528(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001EDBC8;
    flags = func_080E98(0x6B10);
    func_12C4C8();
    if (func_0D1368()) {
        ((void (*)(int a))func_0BB470)(flags);
    } else if (flags & 0x1008) {
        func_0B0848(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B0848(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B0848(7);
                func_019028(4, 0);
            } else {
                func_0B0848(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001ED9E4 = 1;
                        func_0BB418(0x2A7);
                    } else if (k == 0x65) {
                        D_001ED9E4 = 0;
                        func_0BB418(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B3FA8(m, flags);
    }
    m->result = func_0AD2F8(D_001EB930);
}
