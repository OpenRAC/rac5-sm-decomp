/* LEVEL_01:0x0358D8 -- when the count is positive, allocates a block and updates the table pointers, then sets the ready flag. */

extern int func_10F7A0(int a, int b, void *c, int d);
extern unsigned char D_002330F8[];
extern unsigned char D_0020DCA0[];

void func_0358D8(void)
{
    unsigned char *g;
    int v;
    int r;
    int p;
    unsigned int idx;
    int *tbl;
    int t;

    g = D_002330F8;
    v = *(int *)(g + 0x1A94);
    if (v > 0) {
        r = func_10F7A0(v * 0x120, 0, (void *)D_0020DCA0, 0x59F);
        *(int *)(g + 0x1A8C) = r;
        p = *(int *)(g + 0x1A94) * 0x90;
        *(int *)(g + 0x1A90) = r + p;
        idx = *(unsigned int *)(g + 0x1A98);
        tbl = (int *)(g + 0x1A8C);
        t = tbl[idx];
        *(int *)(g + 0x1A9C) = t;
        *(int *)(g + 0x1AA0) = t + p;
    }
    *(unsigned char *)(g + 0x1AA4) = 1;
}
