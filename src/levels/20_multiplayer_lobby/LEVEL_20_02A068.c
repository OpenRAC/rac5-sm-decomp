/* LEVEL_20:0x02A068 -- placement copy of LEVEL_16_02D560.c: repeats a hook call with a fixed table address until it reports success, passing the product of the last two arguments. */

extern char D_00138E90[];

int func_0E1900(char *a0, int a1, int a2, int a3);

int func_02A068(int a0, int a1, int a2, int a3)
{
    int prod;
    int r;

    prod = a2 * a3;
    do {
        r = func_0E1900(D_00138E90, a0, a1, prod);
    } while (r == 0);
    return r;
}
