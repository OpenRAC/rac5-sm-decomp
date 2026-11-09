/* LEVEL_05:0x182898 -- creates an entry from a float triple and fills its 0x2A30-byte block of records. */

extern char *func_1847F8(void *a, void *b);
extern char D_00383788[];
void func_1835E0(void *a, void *b);

char *func_182898(char *a0, float *a1)
{
    char *s1;
    char *s0;
    char *s2;
    char *q;
    float *p;

    s1 = func_1847F8(a0, a1);
    q = *(char **)(s1 + 0x58);
    p = (float *)(s1 + 0x30);
    *(float *)(s1 + 0x30) = a1[0];
    p[1] = a1[1];
    p[2] = a1[2];
    s0 = D_00383788 + *(unsigned char *)(q + 0x58) * 0x2A30;
    s2 = s0 + 0x2A30;
    do {
        func_1835E0(s1, s0);
        s0 += 0x48;
    } while (s0 < s2);
    s1[0x45] = 4;
    *(int *)(s1 + 0x70) = 0;
    return s1;
}
