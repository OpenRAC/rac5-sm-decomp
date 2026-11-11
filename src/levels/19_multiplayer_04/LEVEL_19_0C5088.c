/* LEVEL_19:0x0C5088 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001B4568;
extern char D_001ABC30[];
extern char D_001B429C;
extern int func_079AA0(int a);
extern int func_0C5A38(void);
extern void func_0C4FF0(int a);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern void func_0C4F98(int a);
extern int func_0AA6F8(void);
extern void func_0B81E8(int a);
extern int func_0AB7E0(int a0);
extern int func_0A7FD0(Menu *m, int a);
extern int func_0A0CB0(char *p);

void func_0C5088(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_079AA0(0x6B10);
    if (func_0C5A38()) {
        func_0C4FF0(flags);
    } else if (flags & 0x1008) {
        func_0A4928(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001B4568.items[D_001B4568.cur]->enabled) {
            func_0A4928(1);
            if (D_001B4568.items[D_001B4568.cur]->kind == 0) {
cancel:
                func_0A4928(7);
                func_018898(4, 0);
            } else {
                func_0A4928(6);
                it = D_001B4568.items[D_001B4568.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001B429C = 1;
                        func_0C4F98(0x2A7);
                    } else if (k == 0x65) {
                        D_001B429C = 0;
                        func_0C4F98(0x2A8);
                    } else if (k == 6) {
                        func_0B81E8(func_0AA6F8());
                        func_0AB7E0(6);
                    }
                }
            }
        }
    } else {
        func_0A7FD0(&D_001B4568, flags);
    }
    D_001B4568.result = func_0A0CB0(D_001ABC30);
}
