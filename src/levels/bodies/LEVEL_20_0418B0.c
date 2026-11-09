/* LEVEL_20:0x0418B0 -- placement copy of LEVEL_16_047790.c: calls a lookup helper with a global handle; when it returns nonzero, calls a helper, or else calls a function pointer stored in a sub-record. */
extern char *D_000FD588;
extern char *func_0E5858(char *g);
extern int func_056C68(char *s0);
extern void func_056CB0(char *s0);

void func_0418B0(void)
{
    char *s0;
    char *q;
    void (*fp)(char *);

    s0 = func_0E5858(D_000FD588);
    if (s0 == 0) {
        return;
    }
    if (func_056C68(s0) != 0) {
        func_056CB0(s0);
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
