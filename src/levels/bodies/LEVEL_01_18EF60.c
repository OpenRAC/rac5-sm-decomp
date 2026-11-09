/* LEVEL_01:0x18EF60 -- returns 6 when a flag byte is set; otherwise passes a float picked by a byte test to a helper and returns 5 or 1. */
extern int func_18FDF8(float f);

int func_18EF60(unsigned char *a0)
{
    unsigned char *q;
    float f;
    int r;

    q = *(unsigned char **)(a0 + 0x58);
    if (q[0x4F9] != 0) {
        return 6;
    }
    f = 4.0f;
    if (a0[0x45] == 5) {
        f = 6.25f;
    }
    r = func_18FDF8(f);
    if (r != 0) {
        return 5;
    }
    return 1;
}
