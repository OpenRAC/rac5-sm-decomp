/* LEVEL_01:0x0C0C28 -- handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001FECC8;
extern char D_001FCA30[];
extern char D_001FEAE4;
extern int func_088020(int a);
extern int func_135DF8(void);
extern int func_0D6A68(void);
extern void func_0C0B70(void);
extern int func_0B6020(int a);
extern void func_01A828(int a, int b);
extern void func_0C0B18(int a);
extern int func_0B96A8(Menu *m, int a);
extern int func_0B2AB8(char *p);

void func_0C0C28(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001FECC8;
    flags = func_088020(0x6B10);
    func_135DF8();
    if (func_0D6A68()) {
        ((void (*)(int a))func_0C0B70)(flags);
    } else if (flags & 0x1008) {
        func_0B6020(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B6020(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B6020(7);
                func_01A828(4, 0);
            } else {
                func_0B6020(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001FEAE4 = 1;
                        func_0C0B18(0x2A7);
                    } else if (k == 0x65) {
                        D_001FEAE4 = 0;
                        func_0C0B18(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B96A8(m, flags);
    }
    m->result = func_0B2AB8(D_001FCA30);
}
