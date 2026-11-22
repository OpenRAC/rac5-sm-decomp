/* LEVEL_05:0x151E28 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_0020C838[];
extern int func_0BA2D8(void);
extern void func_0B21F8(char *msg, int code, unsigned int v);
extern void func_079CF8(void *o, int a);

void func_151E28(void *o)
{
    if (func_0BA2D8() == 0) {
        do {
            func_0B21F8(D_0020C838, -0x71, 0xFFFFFFFF);
            func_079CF8(o, 1);
        } while (0);
    }
}
