/* LEVEL_16:0x04F7B0 -- clears two state words, runs two helpers, then clears a pending pointer when a follow-up helper applies. */

extern void func_0366C0(char *a0);
extern void func_037D78(char *a0);
extern int func_079388(void);
extern void func_079328(int a0);
extern void func_125930(char *a0);

void func_04F7B0(char *a0)
{
    char *p;
    int v;

    func_0366C0(a0);
    *(int *)(a0 + 0xCA4) = 0;
    *(int *)(a0 + 0x580) = 0;
    func_037D78(a0);
    v = func_079388();
    if (v == 0x1000) {
        func_079328(2);
    }
    p = *(char **)(a0 + 0xCF0);
    if (p != 0) {
        func_125930(p);
        *(int *)(a0 + 0xCF0) = 0;
    }
}
