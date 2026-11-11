/* LEVEL_08:0x0E1070 -- placement copy of LEVEL_01_0D60B8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_0024E3F8;
extern char D_002458F0[];
extern char D_0024E12C;
extern int func_090070(int a);
extern int func_0E1A28(void);
extern void func_0E0FD8(int a);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern void func_0E0F80(int a);
extern int func_0C6C50(void);
extern void func_0D43F0(int a);
extern int func_0C79A8(int a0);
extern int func_0C4598(Menu *m, int a);
extern int func_0BD750(char *p);

void func_0E1070(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_090070(0x6B10);
    if (func_0E1A28()) {
        func_0E0FD8(flags);
    } else if (flags & 0x1008) {
        func_0C0F10(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_0024E3F8.items[D_0024E3F8.cur]->enabled) {
            func_0C0F10(1);
            if (D_0024E3F8.items[D_0024E3F8.cur]->kind == 0) {
cancel:
                func_0C0F10(7);
                func_01B1A0(4, 0);
            } else {
                func_0C0F10(6);
                it = D_0024E3F8.items[D_0024E3F8.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0024E12C = 1;
                        func_0E0F80(0x2A7);
                    } else if (k == 0x65) {
                        D_0024E12C = 0;
                        func_0E0F80(0x2A8);
                    } else if (k == 6) {
                        func_0D43F0(func_0C6C50());
                        func_0C79A8(6);
                    }
                }
            }
        }
    } else {
        func_0C4598(&D_0024E3F8, flags);
    }
    D_0024E3F8.result = func_0BD750(D_002458F0);
}
