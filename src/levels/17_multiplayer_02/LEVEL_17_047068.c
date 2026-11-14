/* LEVEL_17:0x047068 -- placement copy of LEVEL_16_047808.c: runs the query and update helpers on each of the two controller records. */
extern char D_001D5390[];
extern char D_001D8D80[];
extern int func_05D070(char *p);
extern void func_05D248(char *p);

static __inline__ char *Ctl(unsigned int i)
{
    return i == 0 ? D_001D5390 : i == 1 ? D_001D8D80 : D_001D5390;
}

void func_047068(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (func_05D070(Ctl(i)) != 0) {
            func_05D248(Ctl(i));
        }
    }
}
