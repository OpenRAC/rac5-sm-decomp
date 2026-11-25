/* LEVEL_01:0x0C8180 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_1337E8 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_00200C32;
extern void (*D_00200BC4)(void);
extern void func_135678(struct Obj *p);
extern void func_133010(int value);
extern void func_132FB8(void);
extern int func_1337E8(void);
extern int func_1332A0(int step);

void func_0C8180(struct Obj *p)
{
    func_135678(p);
    D_00200C32 = 0;
    func_133010(0);
    func_132FB8();
    if (func_1337E8() != 0) {
        if (D_00200BC4 != 0)
            D_00200BC4();
        func_1332A0(10);
        D_00200C32 = 1;
    }
}
