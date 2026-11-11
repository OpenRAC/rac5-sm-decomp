/* LEVEL_18:0x04E2B8 -- placement copy of LEVEL_16_04F7B0.c: clears two state words, runs two helpers, then clears a pending pointer when a follow-up helper applies. */

extern void func_034F90(char *a0);
extern void func_036608(char *a0);
extern int func_078D08(void);
extern void func_078CA8(int a0);
extern void func_1249E0(char *a0);

void func_04E2B8(char *a0)
{
    char *p;
    int v;

    func_034F90(a0);
    *(int *)(a0 + 0xCA4) = 0;
    *(int *)(a0 + 0x580) = 0;
    func_036608(a0);
    v = func_078D08();
    if (v == 0x1000) {
        func_078CA8(2);
    }
    p = *(char **)(a0 + 0xCF0);
    if (p != 0) {
        func_1249E0(p);
        *(int *)(a0 + 0xCF0) = 0;
    }
}
