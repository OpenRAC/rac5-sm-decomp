extern char D_0012FDD0[];

int strncmp(const char *, const char *, unsigned int);

int func_0E15F0(void *p)
{
    int match = (strncmp(p, D_0012FDD0, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
