/* LEVEL_08:0x114908 -- placement copy of LEVEL_04_1103F8.c: masks a state word, then runs two helpers on a stack record. */
extern char D_00113A80[];
void func_09E868(void *rec, unsigned int mode, char *tab, int n, int a4, int a5, int a6);
void func_09EA40(void *rec);

void func_114908(unsigned int a0)
{
    unsigned int rec[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    m = (m & 0xFFFFFFFC) | 1;
    func_09E868(rec, m, D_00113A80, 76, 0, -1, 0);
    func_09EA40(rec);
}
