/* LEVEL_19:0x0AF9B8 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001ADEC0;
extern char D_001ABC30[];
extern char D_001ADCDC;
extern int func_079AA0(int a);
extern int func_1261D0(void);
extern int func_0C5A38(void);
extern void func_0AF900(void);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern void func_0AF8A8(int a);
extern int func_0A7FD0(Menu *m, int a);
extern int func_0A0CB0(char *p);

void func_0AF9B8(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001ADEC0;
    flags = func_079AA0(0x6B10);
    func_1261D0();
    if (func_0C5A38()) {
        ((void (*)(int a))func_0AF900)(flags);
    } else if (flags & 0x1008) {
        func_0A4928(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0A4928(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0A4928(7);
                func_018898(4, 0);
            } else {
                func_0A4928(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001ADCDC = 1;
                        func_0AF8A8(0x2A7);
                    } else if (k == 0x65) {
                        D_001ADCDC = 0;
                        func_0AF8A8(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0A7FD0(m, flags);
    }
    m->result = func_0A0CB0(D_001ABC30);
}
