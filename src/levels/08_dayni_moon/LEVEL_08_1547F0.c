/* LEVEL_08:0x1547F0 -- placement copy of LEVEL_04_14F758.c: selects a row of a global word table with a helper result, then reads one word of that row at a second helper index. */

typedef struct {
    int w[64];
} Row14F758;

extern int D_00264470;
extern int D_00250370[];
extern int func_154A20(int v);
extern int func_154970(char *obj);

int func_1547F0(char *a0)
{
    Row14F758 *row;
    int v;
    int idx;

    v = func_154A20(D_00264470);
    row = (Row14F758 *)D_00250370[v];
    idx = func_154970(a0);
    return row->w[idx];
}
