/* LEVEL_10:0x0C1F78 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00207CC8;
extern char D_00205A30[];
extern char D_00207AE4;
extern int func_088388(int a);
extern int func_133C78(void);
extern int func_0D7EA8(void);
extern void func_0C1EC0(void);
extern int func_0B71F8(int a);
extern void func_019EA8(int a, int b);
extern void func_0C1E68(int a);
extern int func_0BA9F0(Menu *m, int a);
extern int func_0B3C90(char *p);

void func_0C1F78(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_00207CC8;
    flags = func_088388(0x6B10);
    func_133C78();
    if (func_0D7EA8()) {
        ((void (*)(int a))func_0C1EC0)(flags);
    } else if (flags & 0x1008) {
        func_0B71F8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B71F8(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B71F8(7);
                func_019EA8(4, 0);
            } else {
                func_0B71F8(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_00207AE4 = 1;
                        func_0C1E68(0x2A7);
                    } else if (k == 0x65) {
                        D_00207AE4 = 0;
                        func_0C1E68(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0BA9F0(m, flags);
    }
    m->result = func_0B3C90(D_00205A30);
}
