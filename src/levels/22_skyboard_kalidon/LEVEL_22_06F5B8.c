/* LEVEL_22:0x06F5B8 -- placement copy of LEVEL_01_07CAB8.c: forwards to a helper when the flag is clear, else compares two scaled fields. */

int func_07A000(void *p);
int func_079FC0(void *p);
void *func_088BE8_dummy(void);

int func_06F5B8(char *a0, int a1)
{
    char *s0;
    char *v3;
    char *a4;
    float f0;
    float f1;
    float f2;

    if (a1 != 0) {
        s0 = *(char **)(a0 + 0x48);
        if (func_079FC0(s0) != 0) {
            return 0;
        }
        f2 = *(float *)(s0 + 0x8) * 0.03333333507180214f;
        v3 = *(char **)(s0 + 0x14);
        f0 = *(float *)(v3 + 0x8) + f2;
        a4 = *(char **)(v3 + 0x4);
        f1 = *(float *)(a4 + 0x28);
        if (f1 < f0) {
            return 1;
        }
        return 0;
    }
    return func_07A000(*(char **)(a0 + 0x48));
}
