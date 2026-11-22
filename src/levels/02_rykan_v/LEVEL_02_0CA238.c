/* LEVEL_02:0x0CA238 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_002152A0;
extern char D_002119F0[];
extern int func_08E950(int a);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern int func_0C3390(int a0);
extern int func_0BFFB8(Menu *m, int a);
extern int func_0B93C8(char *p);

void func_0CA238(void)
{
    int flags;
    int k;

    flags = func_08E950(0x6B10);
    if (flags & 8) {
        func_0BC930(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0BC930(0);
        func_0BC930(7);
        func_0C3390(3);
    } else if (flags & 0x4000) {
        if (D_002152A0.items[D_002152A0.cur]->enabled) {
            func_0BC930(1);
            k = D_002152A0.items[D_002152A0.cur]->kind;
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
        func_0BFFB8(&D_002152A0, flags);
    }
    D_002152A0.result = func_0B93C8(D_002119F0);
}
