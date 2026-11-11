/* LEVEL_02:0x035090 -- compares two byte fields of the object and returns one when a signed difference test holds. */

int func_035090(char *a0)
{
    char *p;
    unsigned int lo;
    unsigned int hi;
    unsigned int kraw;
    unsigned char k;
    unsigned int d1;
    unsigned int d2;
    int t1;
    int t2;

    p = *(char **)(a0 + 0x18);
    lo = *(unsigned char *)(a0 + 0x2C);
    kraw = *(unsigned char *)(p + 0x14);
    hi = *(unsigned char *)(a0 + 0x2D);
    k = (unsigned char)(kraw - 1);
    if (lo < hi) {
        d1 = lo - hi;
        d2 = hi - lo;
    } else {
        d1 = hi - lo;
        d2 = lo - hi;
    }
    t1 = (signed char)(k + d1);
    t2 = (signed char)d2;
    if (hi == lo || t1 >= t2) {
        return 0;
    }
    return 1;
}
