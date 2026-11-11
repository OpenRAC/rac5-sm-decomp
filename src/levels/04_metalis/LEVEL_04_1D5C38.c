/* LEVEL_04:0x1D5C38 -- calls a helper for each pointer in an array until one reports success. */

int func_171AB8(void *a, void *b, void *c, void *d);

int func_1D5C38(char *a0, void *a1, void *a2, void *a3)
{
    char *obj;
    char **p;
    int i;

    i = 0;
    obj = *(char **)(a0 + 0x58);
    a0 = *(char **)(a0 + 0x54);
    if (*(unsigned char *)(obj + 0x49) == 0) {
        return 0;
    }
    p = (char **)(a0 + 0x50);
    do {
        if (func_171AB8(*p, a1, a2, a3) != 0) {
            return 1;
        }
        i++;
        p++;
    } while ((unsigned int)i < *(unsigned char *)(obj + 0x49));
    return 0;
}
