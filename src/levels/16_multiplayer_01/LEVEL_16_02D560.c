/* LEVEL_16:0x02D560 -- repeats a hook call with a fixed table address until it reports success, passing the product of the last two arguments. */

extern char D_001E1510[];

int func_10EB18(char *a0, int a1, int a2, int a3);

int func_02D560(int a0, int a1, int a2, int a3)
{
    int prod;
    int r;

    prod = a2 * a3;
    do {
        r = func_10EB18(D_001E1510, a0, a1, prod);
    } while (r == 0);
    return r;
}
