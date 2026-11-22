/* LEVEL_08:0x16A410 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00267D20[];
extern int func_0C6C50(void);
extern void func_0BEA10(char *msg, int code, unsigned int v);
extern void func_0845F8(void *o, int a);

void func_16A410(void *o)
{
    if (func_0C6C50() == 0) {
        do {
            func_0BEA10(D_00267D20, -0x71, 0xFFFFFFFF);
            func_0845F8(o, 1);
        } while (0);
    }
}
