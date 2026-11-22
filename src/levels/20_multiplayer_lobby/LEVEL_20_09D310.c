/* LEVEL_20:0x09D310 -- placement copy of LEVEL_01_0C3928.c: handles menu input flags and stores the refreshed state. */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00110A38;
extern char D_0010D190[];
extern int func_067228(int a);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern int func_096438(int a0);
extern int func_092C28(Menu *m, int a);
extern int func_08BB18(char *p);

void func_09D310(void)
{
    int flags;
    int k;

    flags = func_067228(0x6B10);
    if (flags & 8) {
        func_08F6B0(0);
        goto cancel;
    } else if (flags & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_096438(3);
    } else if (flags & 0x4000) {
        if (D_00110A38.items[D_00110A38.cur]->enabled) {
            func_08F6B0(1);
            k = D_00110A38.items[D_00110A38.cur]->kind;
            if (k == 0) {
cancel:
                func_08F6B0(7);
                func_016950(4, 0);
            } else {
                func_08F6B0(6);
                func_096438(k);
            }
        }
    } else {
        func_092C28(&D_00110A38, flags);
    }
    D_00110A38.result = func_08BB18(D_0010D190);
}
