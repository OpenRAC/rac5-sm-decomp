/* LEVEL_05:0x0BF1D0 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001EE048;
extern char D_001EBDB0[];
extern char D_001EDE64;
extern int func_085978(int a);
extern int func_131770(void);
extern int func_0D5010(void);
extern void func_0BF118(void);
extern int func_0B45C8(int a);
extern void func_019DC0(int a, int b);
extern void func_0BF0C0(int a);
extern int func_0B7C50(Menu *m, int a);
extern int func_0B1078(char *p);

void func_0BF1D0(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_001EE048;
    flags = func_085978(0x6B10);
    func_131770();
    if (func_0D5010()) {
        ((void (*)(int a))func_0BF118)(flags);
    } else if (flags & 0x1008) {
        func_0B45C8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_0B45C8(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_0B45C8(7);
                func_019DC0(4, 0);
            } else {
                func_0B45C8(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001EDE64 = 1;
                        func_0BF0C0(0x2A7);
                    } else if (k == 0x65) {
                        D_001EDE64 = 0;
                        func_0BF0C0(0x2A8);
                    }
                }
            }
        }
    } else {
        func_0B7C50(m, flags);
    }
    m->result = func_0B1078(D_001EBDB0);
}
