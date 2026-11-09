/* LEVEL_23:0x05BA28 -- placement copy of LEVEL_22_057E78.c: with a null pointer compares two fixed words; otherwise bumps the pointed word when the fixed word is not below it. */

extern unsigned int D_001C73B8;
extern unsigned int D_001C7CC0;

int func_05BA28(unsigned int *p)
{
    int ok;

    if (p == 0) {
        return D_001C73B8 == D_001C7CC0;
    }
    ok = D_001C7CC0 >= *p;
    if (ok) {
        *p = D_001C73B8 + 1;
    }
    return ok;
}
