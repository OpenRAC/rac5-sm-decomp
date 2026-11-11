/* LEVEL_02:0x036468 -- checks two linked records and either sets or clears a flag byte. */

int func_036468(int a0)
{
    char *s;
    char *p;
    char *q;
    unsigned char k;

    s = *(char **)((char *)a0 + 0x58);
    p = *(char **)(s + 4);
    k = *(unsigned char *)(p + 0x45);
    if (k == 5) {
        q = *(char **)(s + 8);
        if (*(unsigned char *)(q + 0x45) == k) {
            *(unsigned char *)(s + 0xAC) = 1;
            return 1;
        }
    }
    if (*(unsigned char *)(s + 0xAC) != 0) {
        *(unsigned char *)(s + 0xAC) = 0;
        return 1;
    }
    return 0;
}
