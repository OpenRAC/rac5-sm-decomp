/* LEVEL_22:0x123A70 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00179F68[];
extern int func_0AA1D8(void);
extern void func_0A22B8(char *msg, int code, unsigned int v);
extern void func_06F170(void *o, int a);

void func_123A70(void *o)
{
    if (func_0AA1D8() == 0) {
        do {
            func_0A22B8(D_00179F68, -0x71, 0xFFFFFFFF);
            func_06F170(o, 1);
        } while (0);
    }
}
