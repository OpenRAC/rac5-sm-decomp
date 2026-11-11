/* LEVEL_18:0x02CB10 -- placement copy of LEVEL_16_02D560.c: repeats a hook call with a fixed table address until it reports success, passing the product of the last two arguments. */

extern char D_001E1890[];

int func_10D7C8(char *a0, int a1, int a2, int a3);

int func_02CB10(int a0, int a1, int a2, int a3)
{
    int prod;
    int r;

    prod = a2 * a3;
    do {
        r = func_10D7C8(D_001E1890, a0, a1, prod);
    } while (r == 0);
    return r;
}
