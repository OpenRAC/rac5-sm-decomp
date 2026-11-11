/* LEVEL_15:0x0F1550 -- placement copy of LEVEL_01_132688.c: checks the tag of a formatted object. */
extern char D_0016E9A8[];

extern int strncmp(const char *, const char *, unsigned int);

int func_0F1550(void *p)
{
    int match = (strncmp(p, D_0016E9A8, 8) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 8) >> 8) ^ 0x120601);

    if (tag != 0)
        match = 0;
    return match;
}
