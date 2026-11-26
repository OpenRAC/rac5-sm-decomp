/* LEVEL_02:0x0C7538 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00213C88;
extern char D_002119F0[];
extern char D_00213AA4;
extern int func_08E950(int a);
extern int func_13C1A8(void);
extern int func_0DD3F8(void);
extern void func_0C7480(void);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern void func_0C7428(int a);
extern int func_0BFFB8(Menu *m, int a);
extern int func_0B93C8(char *p);

void func_0C7538(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_00213C88;
    flags = func_08E950(0x6B10);
    func_13C1A8();
    if (func_0DD3F8()) {
        ((void (*)(int a))func_0C7480)(flags);
    } else if (flags & 0x1008) {
        func_0BC930(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0BC930(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0BC930(7);
                func_01B188(4, 0);
            } else {
                func_0BC930(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_00213AA4 = 1;
                        func_0C7428(0x2A7);
                    } else if (k == 0x65) {
                        D_00213AA4 = 0;
                        func_0C7428(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0BFFB8(m, flags);
    }
    m->result = func_0B93C8(D_002119F0);
}
