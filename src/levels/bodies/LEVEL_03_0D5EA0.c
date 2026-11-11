/* LEVEL_03:0x0D5EA0 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0021DBB8;
extern char D_002150B0[];
extern char D_0021D8EC;
extern int func_087E78(int a);
extern int func_0D6850(void);
extern void func_0D5E08(int a);
extern int func_0B5E08(int a);
extern void func_01A590(int a, int b);
extern void func_0D5DB0(int a);
extern int func_0BBB18(void);
extern void func_0C92B0(int a);
extern int func_0BC868(int a);
extern int func_0B9490(Menu *m, int a);
extern int func_0B28A0(char *p);

void func_0D5EA0(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_087E78(0x6B10);
    if (func_0D6850()) {
        func_0D5E08(flags);
    } else if (flags & 0x1008) {
        func_0B5E08(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0021DBB8.items[D_0021DBB8.cur]->enabled) {
            func_0B5E08(1);
            if (D_0021DBB8.items[D_0021DBB8.cur]->kind == 0) {
cancel:
                func_0B5E08(7);
                func_01A590(4, 0);
            } else {
                func_0B5E08(6);
                it = D_0021DBB8.items[D_0021DBB8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0021D8EC = 1;
                        func_0D5DB0(0x2A7);
                    } else if (k == 0x65) {
                        D_0021D8EC = 0;
                        func_0D5DB0(0x2A8);
                    } else if (k == 6) {
                        func_0C92B0(func_0BBB18());
                        func_0BC868(6);
                    }
                }
            }
        }
    } else {
        func_0B9490(&D_0021DBB8, flags);
    }
    D_0021DBB8.result = func_0B28A0(D_002150B0);
}
