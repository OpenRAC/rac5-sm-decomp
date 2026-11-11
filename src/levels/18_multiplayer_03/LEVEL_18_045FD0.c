/* LEVEL_18:0x045FD0 -- placement copy of LEVEL_16_047790.c: calls a lookup helper with a global handle; when it returns nonzero, calls a helper, or else calls a function pointer stored in a sub-record. */
extern char *D_0019C320;
extern char *func_111AA0(char *g);
extern int func_05C148(char *s0);
extern void func_05C1A0(char *s0);

void func_045FD0(void)
{
    char *s0;
    char *q;
    void (*fp)(char *);

    s0 = func_111AA0(D_0019C320);
    if (s0 == 0) {
        return;
    }
    if (func_05C148(s0) != 0) {
        func_05C1A0(s0);
        return;
    }
    q = *(char **)(s0 + 0xDD4);
    if (q == 0) {
        return;
    }
    fp = *(void (**)(char *))(q + 0xC);
    if (fp == 0) {
        return;
    }
    fp(s0);
}
