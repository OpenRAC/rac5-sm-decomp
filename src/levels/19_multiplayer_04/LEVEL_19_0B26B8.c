/* LEVEL_19:0x0B26B8 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001AF4D8;
extern char D_001ABC30[];
extern int func_079AA0(int a);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern int func_0AB7E0(int a0);
extern int func_0A7FD0(Menu *m, int a);
extern int func_0A0CB0(char *p);

void func_0B26B8(void)
{
    int flags;
    int k;

    flags = func_079AA0(0x6B10);
    if (flags & 8) {
        func_0A4928(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        func_0AB7E0(3);
    } else if (flags & 0x4000) {
        if (D_001AF4D8.items[D_001AF4D8.cur]->enabled) {
            func_0A4928(1);
            k = D_001AF4D8.items[D_001AF4D8.cur]->kind;
            if (k == 0) {
cancel:
                func_0A4928(7);
                func_018898(4, 0);
            } else {
                func_0A4928(6);
                func_0AB7E0(k);
            }
        }
    } else {
        func_0A7FD0(&D_001AF4D8, flags);
    }
    D_001AF4D8.result = func_0A0CB0(D_001ABC30);
}
