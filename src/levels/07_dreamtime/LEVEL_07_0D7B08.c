/* LEVEL_07:0x0D7B08 -- placement copy of LEVEL_01_0D5AA8.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00219140;
extern char D_00210D30[];
extern unsigned char D_003427E8;
extern int func_08A0F0(int a);
extern int func_0B8080(int a);
extern void func_01AEE8(int a, int b);
extern int func_0BB708(Menu *m, int a);
extern int func_0B4B18(char *p);

void func_0D7B08(void)
{
    int flags;

    flags = func_08A0F0(0x6B10);
    if (flags & 0x1008) {
        func_0B8080(0);
        func_0B8080(7);
        func_01AEE8(4, 0);
        D_003427E8 = 5;
    } else if (flags & 0x4000) {
        if (D_00219140.items[D_00219140.cur]->enabled) {
            func_0B8080(1);
            D_003427E8 = D_00219140.cur;
            func_0B8080(7);
            func_01AEE8(4, 0);
        }
    } else {
        func_0BB708(&D_00219140, flags);
    }
    D_00219140.result = func_0B4B18(D_00210D30);
}
