/* LEVEL_16:0x0B2DE0 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_001AE358;
extern char D_001AAAB0[];
extern int func_0795B8(int a);
extern int func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern int func_0ABF08(int a0);
extern int func_0A86F8(Menu *m, int a);
extern int func_0A1420(char *p);

void func_0B2DE0(void)
{
    int flags;
    int k;

    flags = func_0795B8(0x6B10);
    if (flags & 8) {
        func_0A50B0(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_0ABF08(3);
    } else if (flags & 0x4000) {
        if (D_001AE358.items[D_001AE358.cur]->enabled) {
            func_0A50B0(1);
            k = D_001AE358.items[D_001AE358.cur]->kind;
            if (k == 0) {
cancel:
                func_0A50B0(7);
                func_018B98(4, 0);
            } else {
                func_0A50B0(6);
                func_0ABF08(k);
            }
        }
    } else {
        func_0A86F8(&D_001AE358, flags);
    }
    D_001AE358.result = func_0A1420(D_001AAAB0);
}
