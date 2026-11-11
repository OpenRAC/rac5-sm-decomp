/* LEVEL_20:0x048DD8 -- placement copy of LEVEL_16_04F7B0.c: clears two state words, runs two helpers, then clears a pending pointer when a follow-up helper applies. */

extern void func_030AA8(char *a0);
extern void func_032060(char *a0);
extern int func_066FF8(void);
extern void func_066F98(int a0);
extern void func_0F79E8(char *a0);

void func_048DD8(char *a0)
{
    char *p;
    int v;

    func_030AA8(a0);
    *(int *)(a0 + 0xCA4) = 0;
    *(int *)(a0 + 0x580) = 0;
    func_032060(a0);
    v = func_066FF8();
    if (v == 0x1000) {
        func_066F98(2);
    }
    p = *(char **)(a0 + 0xCF0);
    if (p != 0) {
        func_0F79E8(p);
        *(int *)(a0 + 0xCF0) = 0;
    }
}
