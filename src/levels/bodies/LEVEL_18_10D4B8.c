extern char D_001D02E0[];

int strncmp(const char *, const char *, unsigned int);

int func_10D4B8(void *p)
{
    int match = (strncmp(p, D_001D02E0, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
