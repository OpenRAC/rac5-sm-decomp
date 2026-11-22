/* LEVEL_02:0x0CB258 -- placement copy of LEVEL_01_0C4948.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00215A18;
extern char D_002119F0[];
extern int func_08E950(int a);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern int func_0C3390(int a0);
extern int func_0BFFB8(Menu *m, int a);
extern int func_0B93C8(char *p);

void func_0CB258(void)
{
    int flags;
    int k;

    flags = func_08E950(0x6B10);
    if (flags & 0x1008) {
        func_0BC930(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_00215A18.items[D_00215A18.cur]->enabled) {
            func_0BC930(1);
            k = D_00215A18.items[D_00215A18.cur]->kind;
            if (k == 0) {
cancel:
                func_0BC930(7);
                func_01B188(4, 0);
            } else {
                func_0BC930(6);
                func_0C3390(k);
            }
        }
    } else {
        func_0BFFB8(&D_00215A18, flags);
    }
    D_00215A18.result = func_0B93C8(D_002119F0);
}
