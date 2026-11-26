/* LEVEL_16:0x0B00E0 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001ACD40;
extern char D_001AAAB0[];
extern char D_001ACB5C;
extern int func_0795B8(int a);
extern int func_125868(void);
extern int func_0C6160(void);
extern void func_0B0028(void);
extern int func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern void func_0AFFD0(int a);
extern int func_0A86F8(Menu *m, int a);
extern int func_0A1420(char *p);

void func_0B00E0(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001ACD40;
    flags = func_0795B8(0x6B10);
    func_125868();
    if (func_0C6160()) {
        ((void (*)(int a))func_0B0028)(flags);
    } else if (flags & 0x1008) {
        func_0A50B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0A50B0(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0A50B0(7);
                func_018B98(4, 0);
            } else {
                func_0A50B0(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001ACB5C = 1;
                        func_0AFFD0(0x2A7);
                    } else if (k == 0x65) {
                        D_001ACB5C = 0;
                        func_0AFFD0(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0A86F8(m, flags);
    }
    m->result = func_0A1420(D_001AAAB0);
}
