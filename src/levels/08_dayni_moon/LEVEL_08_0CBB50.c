/* LEVEL_08:0x0CBB50 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00247B88;
extern char D_002458F0[];
extern char D_002479A4;
extern int func_090070(int a);
extern int func_153DA0(void);
extern int func_0E1A28(void);
extern void func_0CBA98(void);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern void func_0CBA40(int a);
extern int func_0C4598(Menu *m, int a);
extern int func_0BD750(char *p);

void func_0CBB50(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_00247B88;
    flags = func_090070(0x6B10);
    func_153DA0();
    if (func_0E1A28()) {
        ((void (*)(int a))func_0CBA98)(flags);
    } else if (flags & 0x1008) {
        func_0C0F10(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0C0F10(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0C0F10(7);
                func_01B1A0(4, 0);
            } else {
                func_0C0F10(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_002479A4 = 1;
                        func_0CBA40(0x2A7);
                    } else if (k == 0x65) {
                        D_002479A4 = 0;
                        func_0CBA40(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0C4598(m, flags);
    }
    m->result = func_0BD750(D_002458F0);
}
