/* LEVEL_09:0x0D3368 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001EF338;
extern char D_001E6830[];
extern char D_001EF06C;
extern int func_0849D8(int a);
extern int func_0D3D18(void);
extern void func_0D32D0(int a);
extern int func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern void func_0D3278(int a);
extern int func_0B8FE0(void);
extern void func_0C6778(int a);
extern int func_0B9D30(int a0);
extern int func_0B6958(Menu *m, int a);
extern int func_0AFD68(char *p);

void func_0D3368(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_0849D8(0x6B10);
    if (func_0D3D18()) {
        func_0D32D0(flags);
    } else if (flags & 0x1008) {
        func_0B32D0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001EF338.items[D_001EF338.cur]->enabled) {
            func_0B32D0(1);
            if (D_001EF338.items[D_001EF338.cur]->kind == 0) {
cancel:
                func_0B32D0(7);
                func_019C18(4, 0);
            } else {
                func_0B32D0(6);
                it = D_001EF338.items[D_001EF338.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001EF06C = 1;
                        func_0D3278(0x2A7);
                    } else if (k == 0x65) {
                        D_001EF06C = 0;
                        func_0D3278(0x2A8);
                    } else if (k == 6) {
                        func_0C6778(func_0B8FE0());
                        func_0B9D30(6);
                    }
                }
            }
        }
    } else {
        func_0B6958(&D_001EF338, flags);
    }
    D_001EF338.result = func_0AFD68(D_001E6830);
}
