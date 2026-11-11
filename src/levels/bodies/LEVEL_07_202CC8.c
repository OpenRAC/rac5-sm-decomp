/* LEVEL_07:0x202CC8 -- placement copy of FRONTEND_026900.c. */
extern char D_00240EA8[];

void func_202CC8(int *p, int value)
{
    if (p != 0) {
        p[0] = value;
        p[1] = (int)D_00240EA8;
    }
}
