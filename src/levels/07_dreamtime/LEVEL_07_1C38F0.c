/* LEVEL_07:0x1C38F0 -- two small helpers: a status predicate, and a reset-and-refresh routine. */

extern void func_1C1528(char *o);
extern void func_1C11F0(char *o);
extern int func_1751A8(void *p0, char *p1, int p2, float f0, float f1);

int func_1C38F0(char *o)
{
    char *s;
    int r;

    s = *(char **)(o + 0x54);
    r = (unsigned char)s[0x3E] != 0;
    if (*(unsigned char *)(o + 0x45) == 0xD) {
        r |= 1;
    }
    return r;
}

void func_1C3910(char *o, unsigned char m)
{
    char *s2;
    char *s3;

    s2 = *(char **)(o + 0x54);
    s3 = *(char **)(o + 0x58);
    func_1C1528(o);
    *(unsigned char *)(o + 0x45) = m;
    *(int *)(o + 0x64) = *(int *)(o + 0x64) & ~8;
    func_1C11F0(o);
    s3[0xA8] = func_1751A8(*(void **)(s2 + 0x2C), o, (int)s2, 0.5f, 0.75f);
}
