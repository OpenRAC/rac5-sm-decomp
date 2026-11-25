/* LEVEL_03:0x0C7F68 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_131BB0 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_002192B2;
extern void (*D_00219244)(void);
extern void func_133A40(struct Obj *p);
extern void func_1313D8(int value);
extern void func_131380(void);
extern int func_131BB0(void);
extern int func_131668(int step);

void func_0C7F68(struct Obj *p)
{
    func_133A40(p);
    D_002192B2 = 0;
    func_1313D8(0);
    func_131380();
    if (func_131BB0() != 0) {
        if (D_00219244 != 0)
            D_00219244();
        func_131668(10);
        D_002192B2 = 1;
    }
}
