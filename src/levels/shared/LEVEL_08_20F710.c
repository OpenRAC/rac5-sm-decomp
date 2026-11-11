/* LEVEL_08:0x20F710 -- copies a pointer and a field into the output, then stores the maximum byte found in a strided list between two pointers. */
void func_20F710(char *a0, char *a1)
{
    char *pv;
    char *q;
    char *p;
    char *end;
    int lb;
    int lm;
    int *pp;

    pv = *(char **)(a1 + 0x8);
    *(char **)a0 = pv;
    q = *(char **)(a1 + 0x4);
    *(int *)(a0 + 0x4) = *(int *)(q + 0x20);
    lm = 0;
    p = *(char **)pv;
    end = p + (*(unsigned char *)(pv + 0x8) << 6);
    if (p != end) {
        do {
            lb = *(unsigned char *)(p + 0x2F);
            pp = (lb < lm) ? &lm : &lb;
            lm = *pp;
            p = p + 0x40;
        } while (p != end);
    }
    *(int *)(a0 + 0x8) = lm;
}
