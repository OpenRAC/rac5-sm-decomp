/* LEVEL_22:0x131960 -- offsets a float triple from a table, then scans 32 pointer slots. */

extern char D_00186D40[];
extern int func_0764B0(void *p, float *v);

int func_131960(char *o, float dx)
{
    float v[3];
    void **tbl;
    float *base;
    float *q;
    int i;

    if (o == 0) {
        return 0;
    }
    base = (float *)D_00186D40;
    v[0] = base[12];
    q = base + 12;
    v[1] = q[1] + dx;
    v[2] = q[2];
    tbl = *(void ***)(o + 0x54);
    if (base == 0 || tbl == 0) {
        return 0;
    }
    tbl = (void **)((char *)tbl + 0x10);
    for (i = 0; i < 32; i++) {
        if (tbl[i] != 0 && func_0764B0(tbl[i], v)) {
            return 1;
        }
    }
    return 0;
}
