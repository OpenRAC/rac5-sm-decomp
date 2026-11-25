/* LEVEL_21:0x0A87C8 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_0F26B0 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001558B2;
extern void (*D_00155844)(void);
extern void func_0F4540(struct Obj *p);
extern void func_0F1ED8(int value);
extern void func_0F1E80(void);
extern int func_0F26B0(void);
extern int func_0F2168(int step);

void func_0A87C8(struct Obj *p)
{
    func_0F4540(p);
    D_001558B2 = 0;
    func_0F1ED8(0);
    func_0F1E80();
    if (func_0F26B0() != 0) {
        if (D_00155844 != 0)
            D_00155844();
        func_0F2168(10);
        D_001558B2 = 1;
    }
}
