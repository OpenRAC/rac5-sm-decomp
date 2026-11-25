/* LEVEL_04:0x0CD998 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_13FC68 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_0021A0F2;
extern void (*D_0021A084)(void);
extern void func_141AF8(struct Obj *p);
extern void func_13F490(int value);
extern void func_13F438(void);
extern int func_13FC68(void);
extern int func_13F720(int step);

void func_0CD998(struct Obj *p)
{
    func_141AF8(p);
    D_0021A0F2 = 0;
    func_13F490(0);
    func_13F438();
    if (func_13FC68() != 0) {
        if (D_0021A084 != 0)
            D_0021A084();
        func_13F720(10);
        D_0021A0F2 = 1;
    }
}
