/* LEVEL_22:0x0B6630 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_10ACB8 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_0015FFB2;
extern void (*D_0015FF44)(void);
extern void func_10CB48(struct Obj *p);
extern void func_10A4E0(int value);
extern void func_10A488(void);
extern int func_10ACB8(void);
extern int func_10A770(int step);

void func_0B6630(struct Obj *p)
{
    func_10CB48(p);
    D_0015FFB2 = 0;
    func_10A4E0(0);
    func_10A488();
    if (func_10ACB8() != 0) {
        if (D_0015FF44 != 0)
            D_0015FF44();
        func_10A770(10);
        D_0015FFB2 = 1;
    }
}
