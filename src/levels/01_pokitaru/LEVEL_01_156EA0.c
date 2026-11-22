/* LEVEL_01:0x156EA0 -- when the status check fails, reports it and runs the follow-up with 1. */
extern char D_0021DC48[];
extern int func_0BBD30(void);
extern void func_0B3C38(char *msg, int code, unsigned int v);
extern void func_07C670(void *o, int a);

void func_156EA0(void *o)
{
    if (func_0BBD30() == 0) {
        do {
            func_0B3C38(D_0021DC48, -0x71, 0xFFFFFFFF);
            func_07C670(o, 1);
        } while (0);
    }
}
