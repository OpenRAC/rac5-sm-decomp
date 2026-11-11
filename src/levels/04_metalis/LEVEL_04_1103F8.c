/* LEVEL_04:0x1103F8 -- masks a state word, then runs two helpers on a stack record. */
extern char D_0010F570[];
void func_099A40(void *rec, unsigned int mode, char *tab, int n, int a4, int a5, int a6);
void func_099C18(void *rec);

void func_1103F8(unsigned int a0)
{
    unsigned int rec[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    m = (m & 0xFFFFFFFC) | 1;
    func_099A40(rec, m, D_0010F570, 76, 0, -1, 0);
    func_099C18(rec);
}
