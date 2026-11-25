/* LEVEL_03:0x0C0A10 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00217348;
extern char D_002150B0[];
extern char D_00217164;
extern int func_087E78(int a);
extern int func_1341C8(void);
extern int func_0D6850(void);
extern void func_0C0958(void);
extern int func_0B5E08(int a);
extern void func_01A590(int a, int b);
extern void func_0C0900(int a);
extern int func_0B9490(Menu *m, int a);
extern int func_0B28A0(char *p);

void func_0C0A10(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_00217348;
    flags = func_087E78(0x6B10);
    func_1341C8();
    if (func_0D6850()) {
        ((void (*)(int a))func_0C0958)(flags);
    } else if (flags & 0x1008) {
        func_0B5E08(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B5E08(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B5E08(7);
                func_01A590(4, 0);
            } else {
                func_0B5E08(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_00217164 = 1;
                        func_0C0900(0x2A7);
                    } else if (k == 0x65) {
                        D_00217164 = 0;
                        func_0C0900(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B9490(m, flags);
    }
    m->result = func_0B28A0(D_002150B0);
}
