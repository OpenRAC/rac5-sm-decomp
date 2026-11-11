extern char D_00263D10[];

int strncmp(const char *, const char *, unsigned int);

int func_142EC0(void *p)
{
    int match = (strncmp(p, D_00263D10, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
