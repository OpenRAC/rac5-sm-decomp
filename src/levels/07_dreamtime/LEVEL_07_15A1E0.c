/* LEVEL_07:0x15A1E0 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00232AE8[];
extern int func_0BDD90(void);
extern void func_0B5C98(char *msg, int code, unsigned int v);
extern void func_07E7F0(void *o, int a);

void func_15A1E0(void *o)
{
    if (func_0BDD90() == 0) {
        do {
            func_0B5C98(D_00232AE8, -0x71, 0xFFFFFFFF);
            func_07E7F0(o, 1);
        } while (0);
    }
}
