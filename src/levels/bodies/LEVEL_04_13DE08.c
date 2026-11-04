extern char D_00233A10[];

int strncmp(const char *, const char *, unsigned int);

int func_13DE08(void *p)
{
    int match = (strncmp(p, D_00233A10, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
