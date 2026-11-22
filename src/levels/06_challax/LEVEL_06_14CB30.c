/* LEVEL_06:0x14CB30 -- placement copy of LEVEL_01_156EA0.c: when the status check fails, reports it and runs the follow-up with 1. */
extern char D_0020C7D8[];
extern int func_0B6630(void);
extern void func_0AE478(char *msg, int code, unsigned int v);
extern void func_076268(void *o, int a);

void func_14CB30(void *o)
{
    if (func_0B6630() == 0) {
        do {
            func_0AE478(D_0020C7D8, -0x71, 0xFFFFFFFF);
            func_076268(o, 1);
        } while (0);
    }
}
