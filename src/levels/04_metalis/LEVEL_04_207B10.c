/* LEVEL_04:0x207B10 -- placement copy of FRONTEND_026900.c. */
extern char D_00245DD8[];

void func_207B10(int *p, int value)
{
    if (p != 0) {
        p[0] = value;
        p[1] = (int)D_00245DD8;
    }
}
