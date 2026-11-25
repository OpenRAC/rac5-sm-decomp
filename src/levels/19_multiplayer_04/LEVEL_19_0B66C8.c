/* LEVEL_19:0x0B66C8 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_110BF8 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001AFE2A;
extern void (*D_001AFDBC)(void);
extern void func_1123E8(struct Obj *p);
extern void func_110438(int value);
extern void func_110410(void);
extern int func_110BF8(void);
extern int func_110600(int step);

void func_0B66C8(struct Obj *p)
{
    func_1123E8(p);
    D_001AFE2A = 0;
    func_110438(0);
    func_110410();
    if (func_110BF8() != 0) {
        if (D_001AFDBC != 0)
            D_001AFDBC();
        func_110600(10);
        D_001AFE2A = 1;
    }
}
