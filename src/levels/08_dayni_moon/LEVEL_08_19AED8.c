/* LEVEL_08:0x19AED8 -- calls a helper with two constant float pairs, then sets a state byte on the object. */
extern int func_1FA3F0(void *a, void *b, void *c, int d, int i, float e, float f, float g, float h);

int func_19AED8(char *o)
{
    char *s1;
    int v1;
    int r;

    s1 = *(char **)(o + 0x58);
    r = func_1FA3F0(*(void **)(*(char **)(o + 0x54)), o, o + 0x30, 0, 0,
                    0.0f, 1.0000000150474662e+30f, -1.0f, 1.000100016593933f);
    v1 = 0;
    if (r != 0) {
        v1 = *(int *)r;
    }
    *(int *)(s1 + 0x60) = v1;
    if (v1 == 0) {
        if (*(int *)(s1 + 0x68) != 0) {
            *(int *)(s1 + 0x60) = *(int *)(s1 + 0x68);
            *(int *)(s1 + 0x68) = 0;
        } else {
            o[0x45] = 2;
            return 0;
        }
    }
    return 1;
}
