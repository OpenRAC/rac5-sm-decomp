/* LEVEL_24:0x138E80 -- placement copy of LEVEL_04_14F7B0.c: picks a table block by a helper result and returns one word from it at a helper-scaled offset. */

extern int func_139058(int v);
extern int func_138FA8(void *p);

extern int D_001EB570;
extern int D_001D8130[];

int func_138E80(void *a0)
{
    int *p;
    int idx;

    idx = func_139058(D_001EB570);
    p = (int *)D_001D8130[idx];
    p = p + func_138FA8(a0);
    return p[3];
}
