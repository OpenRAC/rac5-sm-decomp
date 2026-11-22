/* LEVEL_04:0x163FE0 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_002375E0[];
extern int func_0C1540(void);
extern void func_0B9328(char *msg, int code, unsigned int v);
extern void func_07FAE8(void *o, int a);

void func_163FE0(void *o)
{
    if (func_0C1540() == 0) {
        do {
            func_0B9328(D_002375E0, -0x71, 0xFFFFFFFF);
            func_07FAE8(o, 1);
        } while (0);
    }
}
