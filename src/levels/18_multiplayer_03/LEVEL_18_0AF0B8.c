/* LEVEL_18:0x0AF0B8 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001AE1C0;
extern char D_001ABF30[];
extern char D_001ADFDC;
extern int func_078F38(int a);
extern int func_124920(void);
extern int func_0C5138(void);
extern void func_0AF000(void);
extern int func_0A40A8(int a);
extern void func_0181E0(int a, int b);
extern void func_0AEFA8(int a);
extern int func_0A76D0(Menu *m, int a);
extern int func_0A0430(char *p);

void func_0AF0B8(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001AE1C0;
    flags = func_078F38(0x6B10);
    func_124920();
    if (func_0C5138()) {
        ((void (*)(int a))func_0AF000)(flags);
    } else if (flags & 0x1008) {
        func_0A40A8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0A40A8(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0A40A8(7);
                func_0181E0(4, 0);
            } else {
                func_0A40A8(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001ADFDC = 1;
                        func_0AEFA8(0x2A7);
                    } else if (k == 0x65) {
                        D_001ADFDC = 0;
                        func_0AEFA8(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0A76D0(m, flags);
    }
    m->result = func_0A0430(D_001ABF30);
}
