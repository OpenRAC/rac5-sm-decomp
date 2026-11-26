/* LEVEL_15:0x0A1270 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00153948;
extern char D_001516B0[];
extern char D_00153764;
extern int func_06C700(int a);
extern int func_0F4CC8(void);
extern int func_0B70A8(void);
extern void func_0A11B8(void);
extern int func_096530(int a);
extern void func_016A10(int a, int b);
extern void func_0A1160(int a);
extern int func_099CF0(Menu *m, int a);
extern int func_093380(char *p);

void func_0A1270(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_00153948;
    flags = func_06C700(0x6B10);
    func_0F4CC8();
    if (func_0B70A8()) {
        ((void (*)(int a))func_0A11B8)(flags);
    } else if (flags & 0x1008) {
        func_096530(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_096530(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_096530(7);
                func_016A10(4, 0);
            } else {
                func_096530(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_00153764 = 1;
                        func_0A1160(0x2A7);
                    } else if (k == 0x65) {
                        D_00153764 = 0;
                        func_0A1160(0x2A8);
                    }
                }
            }
        }
    } else {
        func_099CF0(m, flags);
    }
    m->result = func_093380(D_001516B0);
}
