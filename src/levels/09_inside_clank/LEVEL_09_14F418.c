/* LEVEL_09:0x14F418 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_00207578[];
extern int func_0B8FE0(void);
extern void func_0B0EE8(char *msg, int code, unsigned int v);
extern void func_079108(void *o, int a);

void func_14F418(void *o)
{
    if (func_0B8FE0() == 0) {
        do {
            func_0B0EE8(D_00207578, -0x71, 0xFFFFFFFF);
            func_079108(o, 1);
        } while (0);
    }
}
