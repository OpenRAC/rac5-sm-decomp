/* LEVEL_16:0x047790 -- calls a lookup helper with a global handle; when it returns nonzero, calls a helper, or else calls a function pointer stored in a sub-record. */
extern char *D_0019AEA0;
extern char *func_112CE8(char *g);
extern int func_05D640(char *s0);
extern void func_05D698(char *s0);

void func_047790(void)
{
    char *s0;
    char *q;
    void (*fp)(char *);

    s0 = func_112CE8(D_0019AEA0);
    if (s0 == 0) {
        return;
    }
    if (func_05D640(s0) != 0) {
        func_05D698(s0);
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
