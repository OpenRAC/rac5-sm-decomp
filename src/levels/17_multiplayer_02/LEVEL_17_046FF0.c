/* LEVEL_17:0x046FF0 -- placement copy of LEVEL_16_047790.c: calls a lookup helper with a global handle; when it returns nonzero, calls a helper, or else calls a function pointer stored in a sub-record. */
extern char *D_0018E4A0;
extern char *func_112478(char *g);
extern int func_05D070(char *s0);
extern void func_05D0C8(char *s0);

void func_046FF0(void)
{
    char *s0;
    char *q;
    void (*fp)(char *);

    s0 = func_112478(D_0018E4A0);
    if (s0 == 0) {
        return;
    }
    if (func_05D070(s0) != 0) {
        func_05D0C8(s0);
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
