/* LEVEL_19:0x046A98 -- placement copy of LEVEL_16_047808.c: runs the query and update helpers on each of the two controller records. */
extern char D_001E4210[];
extern char D_001E7C00[];
extern int func_05CAA0(char *p);
extern void func_05CC78(char *p);

static __inline__ char *Ctl(unsigned int i)
{
    return i == 0 ? D_001E4210 : i == 1 ? D_001E7C00 : D_001E4210;
}

void func_046A98(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (func_05CAA0(Ctl(i)) != 0) {
            func_05CC78(Ctl(i));
        }
    }
}
