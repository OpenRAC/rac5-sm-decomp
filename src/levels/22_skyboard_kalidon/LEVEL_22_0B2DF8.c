/* LEVEL_22:0x0B2DF8 -- placement copy of LEVEL_01_0C4948.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0015FDD8;
extern char D_0015BDB0[];
extern int func_079438(int a);
extern int func_0A4570(int a);
extern void func_016E40(int a, int b);
extern int func_0AAF30(int a0);
extern int func_0A7B50(Menu *m, int a);
extern int func_0A1138(char *p);

void func_0B2DF8(void)
{
    int flags;
    int k;

    flags = func_079438(0x6B10);
    if (flags & 0x1008) {
        func_0A4570(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0015FDD8.items[D_0015FDD8.cur]->enabled) {
            func_0A4570(1);
            k = D_0015FDD8.items[D_0015FDD8.cur]->kind;
            if (k == 0) {
cancel:
                func_0A4570(7);
                func_016E40(4, 0);
            } else {
                func_0A4570(6);
                func_0AAF30(k);
            }
        }
    } else {
        func_0A7B50(&D_0015FDD8, flags);
    }
    D_0015FDD8.result = func_0A1138(D_0015BDB0);
}
