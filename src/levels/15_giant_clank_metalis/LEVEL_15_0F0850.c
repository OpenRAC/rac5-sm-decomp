extern char D_0016E810[];

int strncmp(const char *, const char *, unsigned int);

int func_0F0850(void *p)
{
    int match = (strncmp(p, D_0016E810, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
