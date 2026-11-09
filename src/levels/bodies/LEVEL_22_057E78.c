/* LEVEL_22:0x057E78 -- with a null pointer compares two fixed words; otherwise bumps the pointed word when the fixed word is not below it. */

extern unsigned int D_00153338;
extern unsigned int D_00153C40;

int func_057E78(unsigned int *p)
{
    int ok;

    if (p == 0) {
        return D_00153338 == D_00153C40;
    }
    ok = D_00153C40 >= *p;
    if (ok) {
        *p = D_00153338 + 1;
    }
    return ok;
}
