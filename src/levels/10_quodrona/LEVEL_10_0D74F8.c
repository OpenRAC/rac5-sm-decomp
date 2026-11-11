/* LEVEL_10:0x0D74F8 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0020E538;
extern char D_00205A30[];
extern char D_0020E26C;
extern int func_088388(int a);
extern int func_0D7EA8(void);
extern void func_0D7460(int a);
extern int func_0B71F8(int a);
extern void func_019EA8(int a, int b);
extern void func_0D7408(int a);
extern int func_0BD078(void);
extern void func_0CA908(int a);
extern int func_0BDDD0(int a);
extern int func_0BA9F0(Menu *m, int a);
extern int func_0B3C90(char *p);

void func_0D74F8(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_088388(0x6B10);
    if (func_0D7EA8()) {
        func_0D7460(flags);
    } else if (flags & 0x1008) {
        func_0B71F8(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0020E538.items[D_0020E538.cur]->enabled) {
            func_0B71F8(1);
            if (D_0020E538.items[D_0020E538.cur]->kind == 0) {
cancel:
                func_0B71F8(7);
                func_019EA8(4, 0);
            } else {
                func_0B71F8(6);
                it = D_0020E538.items[D_0020E538.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0020E26C = 1;
                        func_0D7408(0x2A7);
                    } else if (k == 0x65) {
                        D_0020E26C = 0;
                        func_0D7408(0x2A8);
                    } else if (k == 6) {
                        func_0CA908(func_0BD078());
                        func_0BDDD0(6);
                    }
                }
            }
        }
    } else {
        func_0BA9F0(&D_0020E538, flags);
    }
    D_0020E538.result = func_0B3C90(D_00205A30);
}
