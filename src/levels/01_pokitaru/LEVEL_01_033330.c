/* LEVEL_01:0x033330 -- point test against two edge planes of a table entry. */
int func_033330(char *o, const float *pt, unsigned int idx)
{
    float d[2];
    unsigned int i;
    char *e;
    char *e2;
    char *n;
    float cr;

    i = idx & 0xff;
    e = (char *)((i << 4) + *(unsigned int *)(*(char **)(o + 0x18) + 4));
    d[0] = pt[0] - *(float *)(e + 0);
    d[1] = pt[2] - *(float *)(e + 8);
    n = *(char **)(o + 0x28) + i * 24;
    cr = d[1] * *(float *)(n + 0) - d[0] * *(float *)(n + 4);
    if (cr < 0.0f) {
        return 0;
    }
    e2 = (char *)((i << 4) + *(unsigned int *)(*(char **)(o + 0x1C) + 4));
    d[0] = pt[0] - *(float *)(e2 + 0);
    d[1] = pt[2] - *(float *)(e2 + 8);
    cr = d[1] * *(float *)(n + 8) - d[0] * *(float *)(n + 12);
    if (cr > 0.0f) {
        return 0;
    }
    return 1;
}
