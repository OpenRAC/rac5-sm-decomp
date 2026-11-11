/* LEVEL_24:0x138E28 -- placement copy of LEVEL_04_14F758.c: selects a row of a global word table with a helper result, then reads one word of that row at a second helper index. */

typedef struct {
    int w[64];
} Row14F758;

extern int D_001EB570;
extern int D_001D8130[];
extern int func_139058(int v);
extern int func_138FA8(char *obj);

int func_138E28(char *a0)
{
    Row14F758 *row;
    int v;
    int idx;

    v = func_139058(D_001EB570);
    row = (Row14F758 *)D_001D8130[v];
    idx = func_138FA8(a0);
    return row->w[idx];
}
