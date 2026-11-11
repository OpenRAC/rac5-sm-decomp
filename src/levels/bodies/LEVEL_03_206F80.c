/* LEVEL_03:0x206F80 -- placement copy of FRONTEND_026900.c. */
extern char D_00246478[];

void func_206F80(int *p, int value)
{
    if (p != 0) {
        p[0] = value;
        p[1] = (int)D_00246478;
    }
}
