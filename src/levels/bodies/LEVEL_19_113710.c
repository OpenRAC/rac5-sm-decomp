/* LEVEL_19:0x113710 -- placement copy of LEVEL_16_112F68.c: for indices one to fifteen, fetches a record, clears its header and three bytes, then calls a helper with the index. */

extern char *func_021D08(unsigned int a0, char *a1);
extern void func_0210A8(char *a0, unsigned int a1);

void func_113710(char *a0)
{
    char *p;
    char *b;
    unsigned int i;
    unsigned int k;

    i = 1;
    do {
        p = func_021D08(i, *(char **)(a0 + 0xF8));
        *(int *)(p + 0x3C) = 0;
        *(int *)(p + 0x44) = 0;
        b = p + 0x48;
        for (k = 0; k < 3; k++) {
            b[k] = 0;
        }
        func_0210A8(a0, i);
        i++;
    } while (i < 16);
}
