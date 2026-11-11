/* LEVEL_19:0x02D308 -- placement copy of LEVEL_16_02D560.c: repeats a hook call with a fixed table address until it reports success, passing the product of the last two arguments. */

extern char D_001E1690[];

int func_10F1B8(char *a0, int a1, int a2, int a3);

int func_02D308(int a0, int a1, int a2, int a3)
{
    int prod;
    int r;

    prod = a2 * a3;
    do {
        r = func_10F1B8(D_001E1690, a0, a1, prod);
    } while (r == 0);
    return r;
}
