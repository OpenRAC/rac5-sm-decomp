/* LEVEL_01:0x15A750 -- placement copy of LEVEL_16_138730.c: placement copy of LEVEL_01_15A750.c: runs a transform helper on the record's sub-block, then calls a follow-up helper when the result is large enough. */

extern float func_013708(int a0, int a1, int a2, int a3);
extern void func_15C260(char *a0, int a1, int a2);
extern char D_0021E9A4[];

void func_15A750(char *a0)
{
    char *a1;
    float r;

    a1 = *(char **)(a0 + 0x54);
    r = func_013708((int)a0, (int)(a1 + 8), (int)(a1 + 0xC), (int)D_0021E9A4);
    if (0.9f <= r) {
        func_15C260(a0, *(unsigned char *)(a0 + 0x45), 6);
    }
}
