/* LEVEL_08:0x154848 -- placement copy of LEVEL_04_14F7B0.c: picks a table block by a helper result and returns one word from it at a helper-scaled offset. */

extern int func_154A20(int v);
extern int func_154970(void *p);

extern int D_00264470;
extern int D_00250370[];

int func_154848(void *a0)
{
    int *p;
    int idx;

    idx = func_154A20(D_00264470);
    p = (int *)D_00250370[idx];
    p = p + func_154970(a0);
    return p[3];
}
