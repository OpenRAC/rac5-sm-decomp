/* LEVEL_20:0x0AFCE0 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00115AC8;
extern char D_0010D190[];
extern char D_001157FC;
extern int func_067228(int a);
extern int func_0B0690(void);
extern void func_0AFC48(int a);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern void func_0AFBF0(int a);
extern int func_095350(void);
extern void func_0A2E40(int a);
extern int func_096438(int a);
extern int func_092C28(Menu *m, int a);
extern int func_08BB18(char *p);

void func_0AFCE0(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_067228(0x6B10);
    if (func_0B0690()) {
        func_0AFC48(flags);
    } else if (flags & 0x1008) {
        func_08F6B0(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_00115AC8.items[D_00115AC8.cur]->enabled) {
            func_08F6B0(1);
            if (D_00115AC8.items[D_00115AC8.cur]->kind == 0) {
cancel:
                func_08F6B0(7);
                func_016950(4, 0);
            } else {
                func_08F6B0(6);
                it = D_00115AC8.items[D_00115AC8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001157FC = 1;
                        func_0AFBF0(0x2A7);
                    } else if (k == 0x65) {
                        D_001157FC = 0;
                        func_0AFBF0(0x2A8);
                    } else if (k == 6) {
                        func_0A2E40(func_095350());
                        func_096438(6);
                    }
                }
            }
        }
    } else {
        func_092C28(&D_00115AC8, flags);
    }
    D_00115AC8.result = func_08BB18(D_0010D190);
}
