/* LEVEL_15:0x11F4C8 -- passes two records of a global array and a mask to a helper, walking a pointer array. */
extern char D_002F2B80[];
void func_0294D8(char *rec, int val, int mask);

void func_11F4C8(int **a0)
{
    int **p;
    int *v;
    char *rec;
    char *cur;
    int i;

    p = a0;
    rec = D_002F2B80;
    i = 1;
    do {
        v = *p;
        p++;
        cur = rec;
        rec += 0xB0;
        func_0294D8(cur, v[1], 0xFFFF);
        i--;
    } while (i >= 0);
}
