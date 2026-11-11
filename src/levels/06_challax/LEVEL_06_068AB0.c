/* LEVEL_06:0x068AB0 -- placement copy of LEVEL_01_06BCF0.c: initialises a helper, then clears eight slots, calling a finisher on flagged entries. */

void func_068BA8(char *a0);
void func_076268(char *a0, int a1);

void func_068AB0(char *a0)
{
    char **s0;
    unsigned int s1;
    unsigned int one;
    char *v;

    one = 1;
    s0 = (char **)(a0 + 0x1D4);
    s1 = 0;
    func_068BA8(a0);
    do {
        v = *s0;
        s1++;
        if (v != 0) {
            *(char *)(*(char **)(v + 0x54) + 0x1A) = 0;
            if (*(unsigned char *)(v + 0x45) == one) {
                func_076268(v, 1);
            }
            *s0 = 0;
        }
        s0++;
    } while (s1 < 8);
}
