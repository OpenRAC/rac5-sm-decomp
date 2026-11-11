/* LEVEL_10:0x06AF08 -- placement copy of LEVEL_01_06BCF0.c: initialises a helper, then clears eight slots, calling a finisher on flagged entries. */

void func_06B000(char *a0);
void func_07CCA0(char *a0, int a1);

void func_06AF08(char *a0)
{
    char **s0;
    unsigned int s1;
    unsigned int one;
    char *v;

    one = 1;
    s0 = (char **)(a0 + 0x1D4);
    s1 = 0;
    func_06B000(a0);
    do {
        v = *s0;
        s1++;
        if (v != 0) {
            *(char *)(*(char **)(v + 0x54) + 0x1A) = 0;
            if (*(unsigned char *)(v + 0x45) == one) {
                func_07CCA0(v, 1);
            }
            *s0 = 0;
        }
        s0++;
    } while (s1 < 8);
}
