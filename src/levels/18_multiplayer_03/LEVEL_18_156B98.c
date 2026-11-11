/* LEVEL_18:0x156B98 -- finds a free slot in a 3-entry table and marks it used. */

extern unsigned char D_001BF0D8[];

extern void func_11CAE8(int a0, int a1, int a2);

void func_156B98(unsigned char *obj)
{
    unsigned char *rec = *(unsigned char **)(obj + 0x58);
    unsigned char *s1 = *(unsigned char **)(obj + 0x54);
    unsigned int s0;

    if (*(unsigned int *)(rec + 0x24) != 0x89719487) {
        return;
    }
    for (s0 = 0; s0 < 3; s0++) {
        if (D_001BF0D8[s1[4] * 3 + s0] == 0) {
            *(int *)(rec + 0x24) = s0;
            func_11CAE8(s0, s1[4], 0);
            D_001BF0D8[s1[4] * 3 + s0] = 1;
            break;
        }
    }
}
