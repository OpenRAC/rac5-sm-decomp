/* LEVEL_02:0x162DC0 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00233748[];
extern int func_0C2640(void);
extern void func_0BA548(char *msg, int code, unsigned int v);
extern void func_082F58(void *o, int a);

void func_162DC0(void *o)
{
    if (func_0C2640() == 0) {
        do {
            func_0BA548(D_00233748, -0x71, 0xFFFFFFFF);
            func_082F58(o, 1);
        } while (0);
    }
}
