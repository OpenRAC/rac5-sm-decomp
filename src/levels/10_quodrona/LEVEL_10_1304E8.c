/* LEVEL_10:0x1304E8 -- placement copy of LEVEL_01_132688.c: checks the tag of a formatted object. */
extern char D_002231B8[];

extern int strncmp(const char *, const char *, unsigned int);

int func_1304E8(void *p)
{
    int match = (strncmp(p, D_002231B8, 8) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 8) >> 8) ^ 0x120601);

    if (tag != 0)
        match = 0;
    return match;
}
