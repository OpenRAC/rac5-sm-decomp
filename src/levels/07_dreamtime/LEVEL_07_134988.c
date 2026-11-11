extern char D_0022ED90[];

int strncmp(const char *, const char *, unsigned int);

int func_134988(void *p)
{
    int match = (strncmp(p, D_0022ED90, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
