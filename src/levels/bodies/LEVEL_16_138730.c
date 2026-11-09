/* LEVEL_16:0x138730 -- placement copy of LEVEL_01_15A750.c: runs a transform helper on the record's sub-block, then calls a follow-up helper when the result is large enough. */

extern float func_0130F0(int a0, int a1, int a2, int a3);
extern void func_1394D0(char *a0, int a1, int a2);
extern char D_001D2054[];

void func_138730(char *a0)
{
    char *a1;
    float r;

    a1 = *(char **)(a0 + 0x54);
    r = func_0130F0((int)a0, (int)(a1 + 8), (int)(a1 + 0xC), (int)D_001D2054);
    if (0.9f <= r) {
        func_1394D0(a0, *(unsigned char *)(a0 + 0x45), 6);
    }
}
