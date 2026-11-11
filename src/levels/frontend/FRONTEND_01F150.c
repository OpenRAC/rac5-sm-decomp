/* FRONTEND:0x01F150 -- checks the tag of a formatted object. */
extern char D_00109920[];

int strncmp(const char *, const char *, unsigned int);

int func_01F150(void *p)
{
    int match = (strncmp(p, D_00109920, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
