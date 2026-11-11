/* LEVEL_01:0x132688 -- checks the tag of a formatted object. */
extern char D_0021A228[];

extern int strncmp(const char *, const char *, unsigned int);

int func_132688(void *p)
{
    int match = (strncmp(p, D_0021A228, 8) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 8) >> 8) ^ 0x120601);

    if (tag != 0)
        match = 0;
    return match;
}
