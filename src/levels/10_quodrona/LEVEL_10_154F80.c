/* LEVEL_10:0x154F80 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00226B70[];
extern int func_0BD078(void);
extern void func_0B4E10(char *msg, int code, unsigned int v);
extern void func_07CCA0(void *o, int a);

void func_154F80(void *o)
{
    if (func_0BD078() == 0) {
        do {
            func_0B4E10(D_00226B70, -0x71, 0xFFFFFFFF);
            func_07CCA0(o, 1);
        } while (0);
    }
}
