/* LEVEL_01:0x1C2AD0 -- runs a transform helper on the record's sub-block, then calls a follow-up helper when the result is large enough. */

extern float func_013708(char *a0, char *a1, char *a2, char *a3);
extern void func_1C1E90(char *a0, int a1, int a2);
extern char D_0022951C[];

void func_1C2AD0(char *a0)
{
    char *a1;
    float r;

    a1 = *(char **)(a0 + 0x54);
    r = func_013708(a0, a1 + 8, a1 + 0xC, D_0022951C);
    if (0.9f <= r) {
        func_1C1E90(a0, *(unsigned char *)(a0 + 0x45), 4);
    }
}
