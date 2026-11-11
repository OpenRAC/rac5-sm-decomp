/* LEVEL_22:0x109B58 -- placement copy of LEVEL_01_132688.c: checks the tag of a formatted object. */
extern char D_001776A8[];

extern int strncmp(const char *, const char *, unsigned int);

int func_109B58(void *p)
{
    int match = (strncmp(p, D_001776A8, 8) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 8) >> 8) ^ 0x120601);

    if (tag != 0)
        match = 0;
    return match;
}
