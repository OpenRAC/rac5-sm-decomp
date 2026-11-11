/* LEVEL_18:0x156C70 -- returns 1 for an empty link or a successful helper call; otherwise 1 when a linked word is zero. */
extern int func_036BE8(char *a0);

int func_156C70(char *a0)
{
    char *p;
    char *q;
    int r;

    p = *(char **)(a0 + 0x58);
    q = *(char **)p;
    if (q == 0) {
        return 1;
    }
    r = 0;
    if (func_036BE8(q) != 0 || *(int *)(*(char **)p + 0xF4) == 0) {
        r = 1;
    }
    return r;
}
