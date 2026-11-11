/* LEVEL_02:0x203588 -- placement copy of FRONTEND_026900.c. */
extern char D_00242AF8[];

void func_203588(int *p, int value)
{
    if (p != 0) {
        p[0] = value;
        p[1] = (int)D_00242AF8;
    }
}
