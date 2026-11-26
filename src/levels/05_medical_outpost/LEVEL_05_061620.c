/* LEVEL_05:0x061620 -- placement copy of LEVEL_01_0639B8.c: returns 1 when a record's short at +0x100 is 0x21 and a flag bit is clear. */
extern unsigned char D_00224E9C;

long long func_061620(char *record)
{
    long long r = 0;
    int t;
    unsigned int m;

    if (*(short *)(record + 0x100) == 0x21) {
        m = D_00224E9C & 2;
        t = m == 0;
        r = t;
    }
    return r;
}
