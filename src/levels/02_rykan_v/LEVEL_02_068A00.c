/* LEVEL_02:0x068A00 -- sets a global state word from -1 to 1 when a record field is zero. */
extern int D_00250668[];

void func_068A00(char *record)
{
    int *p;
    if (*(unsigned short *)(record + 0x108) == 0) {
        p = D_00250668;
        if (p[8] == -1)
            p[8] = 1;
    }
}
