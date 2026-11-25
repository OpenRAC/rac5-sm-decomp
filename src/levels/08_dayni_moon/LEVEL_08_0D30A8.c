/* LEVEL_08:0x0D30A8 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_144D20 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_00249AF2;
extern void (*D_00249A84)(void);
extern void func_146BB0(struct Obj *p);
extern void func_144548(int value);
extern void func_1444F0(void);
extern int func_144D20(void);
extern int func_1447D8(int step);

void func_0D30A8(struct Obj *p)
{
    func_146BB0(p);
    D_00249AF2 = 0;
    func_144548(0);
    func_1444F0();
    if (func_144D20() != 0) {
        if (D_00249A84 != 0)
            D_00249A84();
        func_1447D8(10);
        D_00249AF2 = 1;
    }
}
