/* LEVEL_18:0x157B58 -- checks three consecutive slots against a mode value and returns 0 on the first mismatch. */

int func_158008(void *s);
int func_157FF8(void *s);

int func_157B58(char *a0, unsigned char a1)
{
    unsigned int s3;
    unsigned int s2;
    int *s1;
    void *s0;
    int ret;

    s3 = a1 & 0xFF;
    s2 = 0;
    s1 = (int *)(*(char **)(a0 + 0x54) + 8);
    do {
        s0 = (void *)*s1;
        if (func_158008(s0) == 0) {
            return 0;
        }
        ret = 0;
        if (func_157FF8(s0) != s3) {
            return ret;
        }
        s2++;
        s1++;
    } while (s2 < 3);
    return 1;
}
