/* LEVEL_04:0x14F758 -- selects a row of a global word table with a helper result, then reads one word of that row at a second helper index. */

typedef struct {
    int w[64];
} Row14F758;

extern int D_00234170;
extern int D_002208D0[];
extern int func_14F988(int v);
extern int func_14F8D8(char *obj);

int func_14F758(char *a0)
{
    Row14F758 *row;
    int v;
    int idx;

    v = func_14F988(D_00234170);
    row = (Row14F758 *)D_002208D0[v];
    idx = func_14F8D8(a0);
    return row->w[idx];
}
