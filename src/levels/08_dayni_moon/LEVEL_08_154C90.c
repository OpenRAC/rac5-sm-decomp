/* LEVEL_08:0x154C90 -- placement copy of LEVEL_04_14FBF8.c: selects a table entry by a global index, offsets it by a helper result, and returns one word. */

extern int D_00264470;
extern int *D_00250370[];

int func_154A20(int v);
int func_154970(void *a0);

int func_154C90(void *a0)
{
    int idx;
    int *p;
    int r;

    idx = func_154A20(D_00264470);
    p = D_00250370[idx];
    r = func_154970(a0);
    p += r;
    return p[6];
}
