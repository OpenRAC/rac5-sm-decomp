/* LEVEL_09:0x0BDED8 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001E8AC8;
extern char D_001E6830[];
extern char D_001E88E4;
extern int func_0849D8(int a);
extern int func_12ED90(void);
extern int func_0D3D18(void);
extern void func_0BDE20(void);
extern int func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern void func_0BDDC8(int a);
extern int func_0B6958(Menu *m, int a);
extern int func_0AFD68(char *p);

void func_0BDED8(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001E8AC8;
    flags = func_0849D8(0x6B10);
    func_12ED90();
    if (func_0D3D18()) {
        ((void (*)(int a))func_0BDE20)(flags);
    } else if (flags & 0x1008) {
        func_0B32D0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B32D0(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B32D0(7);
                func_019C18(4, 0);
            } else {
                func_0B32D0(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001E88E4 = 1;
                        func_0BDDC8(0x2A7);
                    } else if (k == 0x65) {
                        D_001E88E4 = 0;
                        func_0BDDC8(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B6958(m, flags);
    }
    m->result = func_0AFD68(D_001E6830);
}
