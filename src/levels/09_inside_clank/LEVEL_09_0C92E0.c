/* LEVEL_09:0x0C92E0 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001EB990;
extern char D_001E6830[];
extern int func_0849D8(int a);
extern int func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern int func_0B9D30(int a0);
extern int func_0B6958(Menu *m, int a);
extern int func_0AFD68(char *p);

void func_0C92E0(void)
{
    int flags;
    int k;

    flags = func_0849D8(0x6B10);
    if (flags & 8) {
        func_0B32D0(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0B32D0(0);
        func_0B32D0(7);
        func_0B9D30(3);
    } else if (flags & 0x4000) {
        if (D_001EB990.items[D_001EB990.cur]->enabled) {
            func_0B32D0(1);
            k = D_001EB990.items[D_001EB990.cur]->kind;
            if (k == 0) {
cancel:
                func_0B32D0(7);
                func_019C18(4, 0);
            } else {
                func_0B32D0(6);
                func_0B9D30(k);
            }
        }
    } else {
        func_0B6958(&D_001EB990, flags);
    }
    D_001EB990.result = func_0AFD68(D_001E6830);
}
