/* LEVEL_24:0x14C988 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_001EE8B0[];
extern int func_0B55F0(void);
extern void func_0AD4B0(char *msg, int code, unsigned int v);
extern void func_076D68(void *o, int a);

void func_14C988(void *o)
{
    if (func_0B55F0() == 0) {
        do {
            func_0AD4B0(D_001EE8B0, -0x71, 0xFFFFFFFF);
            func_076D68(o, 1);
        } while (0);
    }
}
