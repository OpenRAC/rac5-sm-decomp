/* LEVEL_02:0x071170 -- placement copy of LEVEL_01_06BCF0.c: initialises a helper, then clears eight slots, calling a finisher on flagged entries. */

void func_071268(char *a0);
void func_082F58(char *a0, int a1);

void func_071170(char *a0)
{
    char **s0;
    unsigned int s1;
    unsigned int one;
    char *v;

    one = 1;
    s0 = (char **)(a0 + 0x1D4);
    s1 = 0;
    func_071268(a0);
    do {
        v = *s0;
        s1++;
        if (v != 0) {
            *(char *)(*(char **)(v + 0x54) + 0x1A) = 0;
            if (*(unsigned char *)(v + 0x45) == one) {
                func_082F58(v, 1);
            }
            *s0 = 0;
        }
        s0++;
    } while (s1 < 8);
}
