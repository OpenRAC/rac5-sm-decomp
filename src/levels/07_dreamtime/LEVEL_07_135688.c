/* LEVEL_07:0x135688 -- placement copy of LEVEL_01_132688.c: checks the tag of a formatted object. */
extern char D_0022EF28[];

extern int strncmp(const char *, const char *, unsigned int);

int func_135688(void *p)
{
    int match = (strncmp(p, D_0022EF28, 8) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 8) >> 8) ^ 0x120601);

    if (tag != 0)
        match = 0;
    return match;
}
