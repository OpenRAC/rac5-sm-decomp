/* LEVEL_23:0x154C50 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_001F18E0[];
extern int func_0B2AC8(void);
extern void func_0AAA18(char *msg, int code, unsigned int v);
extern void func_073A88(void *o, int a);

void func_154C50(void *o)
{
    if (func_0B2AC8() == 0) {
        do {
            func_0AAA18(D_001F18E0, -0x71, 0xFFFFFFFF);
            func_073A88(o, 1);
        } while (0);
    }
}
