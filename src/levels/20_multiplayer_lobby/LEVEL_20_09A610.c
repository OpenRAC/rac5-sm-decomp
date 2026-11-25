/* LEVEL_20:0x09A610 -- placement copy of LEVEL_01_0C0C28.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0010F420;
extern char D_0010D190[];
extern char D_0010F23C;
extern int func_067228(int a);
extern int func_0F7938(void);
extern int func_0B0690(void);
extern void func_09A558(void);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern void func_09A500(int a);
extern int func_092C28(Menu *m, int a);
extern int func_08BB18(char *p);

void func_09A610(void)
{
    int flags;
    int k;
    Item *it;
    Menu *m;

    m = &D_0010F420;
    flags = func_067228(0x6B10);
    func_0F7938();
    if (func_0B0690()) {
        ((void (*)(int a))func_09A558)(flags);
    } else if (flags & 0x1008) {
        func_08F6B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (m->items[m->cur]->enabled) {
            func_08F6B0(1);
            if (m->items[m->cur]->kind == 0) {
cancel:
                func_08F6B0(7);
                func_016950(4, 0);
            } else {
                func_08F6B0(6);
                it = m->items[m->cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0010F23C = 1;
                        func_09A500(0x2A7);
                    } else if (k == 0x65) {
                        D_0010F23C = 0;
                        func_09A500(0x2A8);
                    }
                }
            }
        }
    } else {
        func_092C28(m, flags);
    }
    m->result = func_08BB18(D_0010D190);
}
