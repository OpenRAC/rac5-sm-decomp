/* LEVEL_24:0x1392C8 -- placement copy of LEVEL_04_14FBF8.c: selects a table entry by a global index, offsets it by a helper result, and returns one word. */

extern int D_001EB570;
extern int *D_001D8130[];

int func_139058(int v);
int func_138FA8(void *a0);

int func_1392C8(void *a0)
{
    int idx;
    int *p;
    int r;

    idx = func_139058(D_001EB570);
    p = D_001D8130[idx];
    r = func_138FA8(a0);
    p += r;
    return p[6];
}
