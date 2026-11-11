/* LEVEL_06:0x0D09B8 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001F4438;
extern char D_001EB930[];
extern char D_001F416C;
extern int func_080E98(int a);
extern int func_0D1368(void);
extern void func_0D0920(int a);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern void func_0D08C8(int a);
extern int func_0B6630(void);
extern void func_0C3DC8(int a);
extern int func_0B7380(int a0);
extern int func_0B3FA8(Menu *m, int a);
extern int func_0AD2F8(char *p);

void func_0D09B8(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_080E98(0x6B10);
    if (func_0D1368()) {
        func_0D0920(flags);
    } else if (flags & 0x1008) {
        func_0B0848(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_001F4438.items[D_001F4438.cur]->enabled) {
            func_0B0848(1);
            if (D_001F4438.items[D_001F4438.cur]->kind == 0) {
cancel:
                func_0B0848(7);
                func_019028(4, 0);
            } else {
                func_0B0848(6);
                it = D_001F4438.items[D_001F4438.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_001F416C = 1;
                        func_0D08C8(0x2A7);
                    } else if (k == 0x65) {
                        D_001F416C = 0;
                        func_0D08C8(0x2A8);
                    } else if (k == 6) {
                        func_0C3DC8(func_0B6630());
                        func_0B7380(6);
                    }
                }
            }
        }
    } else {
        func_0B3FA8(&D_001F4438, flags);
    }
    D_001F4438.result = func_0AD2F8(D_001EB930);
}
