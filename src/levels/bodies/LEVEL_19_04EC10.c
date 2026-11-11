/* LEVEL_19:0x04EC10 -- placement copy of LEVEL_16_04F7B0.c: clears two state words, runs two helpers, then clears a pending pointer when a follow-up helper applies. */

extern void func_035A50(char *a0);
extern void func_037058(char *a0);
extern int func_079870(void);
extern void func_079810(int a0);
extern void func_151538(char *a0);

void func_04EC10(char *a0)
{
    char *p;
    int v;

    func_035A50(a0);
    *(int *)(a0 + 0xCA4) = 0;
    *(int *)(a0 + 0x580) = 0;
    func_037058(a0);
    v = func_079870();
    if (v == 0x1000) {
        func_079810(2);
    }
    p = *(char **)(a0 + 0xCF0);
    if (p != 0) {
        func_151538(p);
        *(int *)(a0 + 0xCF0) = 0;
    }
}
