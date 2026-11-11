/* LEVEL_18:0x0C4788 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001B4868;
extern char D_001ABF30[];
extern char D_001B459C;
extern int func_078F38(int a);
extern int func_0C5138(void);
extern void func_0C46F0(int a);
extern int func_0A40A8(int a);
extern void func_0181E0(int a, int b);
extern void func_0C4698(int a);
extern int func_0A9DF8(void);
extern void func_0B78E8(int a);
extern int func_0AAEE0(int a);
extern int func_0A76D0(Menu *m, int a);
extern int func_0A0430(char *p);

void func_0C4788(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_078F38(0x6B10);
    if (func_0C5138()) {
        func_0C46F0(flags);
    } else if (flags & 0x1008) {
        func_0A40A8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001B4868.items[D_001B4868.cur]->enabled) {
            func_0A40A8(1);
            if (D_001B4868.items[D_001B4868.cur]->kind == 0) {
cancel:
                func_0A40A8(7);
                func_0181E0(4, 0);
            } else {
                func_0A40A8(6);
                it = D_001B4868.items[D_001B4868.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001B459C = 1;
                        func_0C4698(0x2A7);
                    } else if (k == 0x65) {
                        D_001B459C = 0;
                        func_0C4698(0x2A8);
                    } else if (k == 6) {
                        func_0B78E8(func_0A9DF8());
                        func_0AAEE0(6);
                    }
                }
            }
        }
    } else {
        func_0A76D0(&D_001B4868, flags);
    }
    D_001B4868.result = func_0A0430(D_001ABF30);
}
