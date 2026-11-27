/* LEVEL_02:0x16B8F0 -- returns the last index from 1 whose byte table entry does not exceed the computed key. */
extern int func_034880(char *item, char *other, char *last);

unsigned int func_16B8F0(char *o, char *other)
{
    char *a;
    char *v;
    char *w;
    unsigned char *s2;
    unsigned int cnt;
    unsigned int x;
    unsigned char i;
    unsigned char r;

    a = *(char **)(o + 0x54);
    v = *(char **)(a + 0x14);
    w = *(char **)(v + 0x54);
    s2 = (unsigned char *)(*(char **)(v + 0x58) + 0x6A8);
    cnt = (unsigned char)w[0x29];
    x = func_034880(a + 0x20, other, 0);
    r = 0;
    for (i = 1; i < cnt; i++) {
        if (x >= s2[i])
            r = i;
        else
            break;
    }
    return r;
}
