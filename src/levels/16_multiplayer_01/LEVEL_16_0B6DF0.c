/* LEVEL_16:0x0B6DF0 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_110558 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001AECAA;
extern void (*D_001AEC3C)(void);
extern void func_111D48(struct Obj *p);
extern void func_10FD98(int value);
extern void func_10FD70(void);
extern int func_110558(void);
extern int func_10FF60(int step);

void func_0B6DF0(struct Obj *p)
{
    func_111D48(p);
    D_001AECAA = 0;
    func_10FD98(0);
    func_10FD70();
    if (func_110558() != 0) {
        if (D_001AEC3C != 0)
            D_001AEC3C();
        func_10FF60(10);
        D_001AECAA = 1;
    }
}
