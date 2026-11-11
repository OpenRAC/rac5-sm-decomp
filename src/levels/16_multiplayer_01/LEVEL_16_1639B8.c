/* LEVEL_16:0x1639B8 -- returns the first entry of a pointer list that accepts a callback. */

int func_0763F8(void *a0, void *a1);

int func_1639B8(char *a0, void *a1)
{
    char *s3;
    char **list;
    unsigned int i;
    char *s0;

    s3 = *(char **)(a0 + 0x58);
    list = *(char ***)(a0 + 0x54);
    for (i = 0; i < *(unsigned int *)(s3 + 4); i++) {
        s0 = list[i];
        if (s0 != 0) {
            if (func_0763F8(s0, a1) != 0) {
                return (int)s0;
            }
        }
    }
    return 0;
}
