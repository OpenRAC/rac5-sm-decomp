/* LEVEL_18:0x0B5DC8 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_10F208 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001B012A;
extern void (*D_001B00BC)(void);
extern void func_1109F8(struct Obj *p);
extern void func_10EA48(int value);
extern void func_10EA20(void);
extern int func_10F208(void);
extern int func_10EC10(int step);

void func_0B5DC8(struct Obj *p)
{
    func_1109F8(p);
    D_001B012A = 0;
    func_10EA48(0);
    func_10EA20();
    if (func_10F208() != 0) {
        if (D_001B00BC != 0)
            D_001B00BC();
        func_10EC10(10);
        D_001B012A = 1;
    }
}
