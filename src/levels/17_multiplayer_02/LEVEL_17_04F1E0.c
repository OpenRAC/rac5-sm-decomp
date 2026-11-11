/* LEVEL_17:0x04F1E0 -- placement copy of LEVEL_16_04F7B0.c: clears two state words, runs two helpers, then clears a pending pointer when a follow-up helper applies. */

extern void func_036010(char *a0);
extern void func_037618(char *a0);
extern int func_079E00(void);
extern void func_079DA0(int a0);
extern void func_125368(char *a0);

void func_04F1E0(char *a0)
{
    char *p;
    int v;

    func_036010(a0);
    *(int *)(a0 + 0xCA4) = 0;
    *(int *)(a0 + 0x580) = 0;
    func_037618(a0);
    v = func_079E00();
    if (v == 0x1000) {
        func_079DA0(2);
    }
    p = *(char **)(a0 + 0xCF0);
    if (p != 0) {
        func_125368(p);
        *(int *)(a0 + 0xCF0) = 0;
    }
}
