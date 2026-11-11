/* LEVEL_05:0x0D4660 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001F48B8;
extern char D_001EBDB0[];
extern char D_001F45EC;
extern int func_085978(int a);
extern int func_0D5010(void);
extern void func_0D45C8(int a);
extern int func_0B45C8(int a);
extern void func_019DC0(int a, int b);
extern void func_0D4570(int a);
extern int func_0BA2D8(void);
extern void func_0C7A70(int a);
extern int func_0BB028(int a);
extern int func_0B7C50(Menu *m, int a);
extern int func_0B1078(char *p);

void func_0D4660(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_085978(0x6B10);
    if (func_0D5010()) {
        func_0D45C8(flags);
    } else if (flags & 0x1008) {
        func_0B45C8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001F48B8.items[D_001F48B8.cur]->enabled) {
            func_0B45C8(1);
            if (D_001F48B8.items[D_001F48B8.cur]->kind == 0) {
cancel:
                func_0B45C8(7);
                func_019DC0(4, 0);
            } else {
                func_0B45C8(6);
                it = D_001F48B8.items[D_001F48B8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001F45EC = 1;
                        func_0D4570(0x2A7);
                    } else if (k == 0x65) {
                        D_001F45EC = 0;
                        func_0D4570(0x2A8);
                    } else if (k == 6) {
                        func_0C7A70(func_0BA2D8());
                        func_0BB028(6);
                    }
                }
            }
        }
    } else {
        func_0B7C50(&D_001F48B8, flags);
    }
    D_001F48B8.result = func_0B1078(D_001EBDB0);
}
