/* LEVEL_07:0x202CA8 -- placement copy of FRONTEND_026900.c. */
extern char D_00240EB8[];

void func_202CA8(int *p, int value)
{
    if (p != 0) {
        p[0] = value;
        p[1] = (int)D_00240EB8;
    }
}
