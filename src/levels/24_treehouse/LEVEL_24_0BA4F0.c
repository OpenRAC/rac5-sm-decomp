/* LEVEL_24:0x0BA4F0 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001CF948;
extern char D_001CD6B0[];
extern char D_001CF764;
extern int func_0812C0(int a);
extern int func_1383D8(void);
extern int func_0D03C0(void);
extern void func_0BA438(void);
extern int func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern void func_0BA3E0(int a);
extern int func_0B2F38(Menu *m, int a);
extern int func_0AC330(char *p);

void func_0BA4F0(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001CF948;
    flags = func_0812C0(0x6B10);
    func_1383D8();
    if (func_0D03C0()) {
        ((void (*)(int a))func_0BA438)(flags);
    } else if (flags & 0x1008) {
        func_0AF8B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0AF8B0(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0AF8B0(7);
                func_018E18(4, 0);
            } else {
                func_0AF8B0(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001CF764 = 1;
                        func_0BA3E0(0x2A7);
                    } else if (k == 0x65) {
                        D_001CF764 = 0;
                        func_0BA3E0(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B2F38(m, flags);
    }
    m->result = func_0AC330(D_001CD6B0);
}
