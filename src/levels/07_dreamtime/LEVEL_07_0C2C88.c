/* LEVEL_07:0x0C2C88 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00212FC8;
extern char D_00210D30[];
extern char D_00212DE4;
extern int func_08A0F0(int a);
extern int func_138DF8(void);
extern int func_0D8AC8(void);
extern void func_0C2BD0(void);
extern int func_0B8080(int a);
extern void func_01AEE8(int a, int b);
extern void func_0C2B78(int a);
extern int func_0BB708(Menu *m, int a);
extern int func_0B4B18(char *p);

void func_0C2C88(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_00212FC8;
    flags = func_08A0F0(0x6B10);
    func_138DF8();
    if (func_0D8AC8()) {
        ((void (*)(int a))func_0C2BD0)(flags);
    } else if (flags & 0x1008) {
        func_0B8080(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B8080(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B8080(7);
                func_01AEE8(4, 0);
            } else {
                func_0B8080(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_00212DE4 = 1;
                        func_0C2B78(0x2A7);
                    } else if (k == 0x65) {
                        D_00212DE4 = 0;
                        func_0C2B78(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0BB708(m, flags);
    }
    m->result = func_0B4B18(D_00210D30);
}
