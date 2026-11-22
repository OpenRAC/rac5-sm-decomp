/* LEVEL_03:0x156330 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00236FE8[];
extern int func_0BBB18(void);
extern void func_0B3A20(char *msg, int code, unsigned int v);
extern void func_07C468(void *o, int a);

void func_156330(void *o)
{
    if (func_0BBB18() == 0) {
        do {
            func_0B3A20(D_00236FE8, -0x71, 0xFFFFFFFF);
            func_07C468(o, 1);
        } while (0);
    }
}
