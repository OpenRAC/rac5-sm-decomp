/* LEVEL_20:0x041928 -- placement copy of LEVEL_16_047808.c: runs the query and update helpers on each of the two controller records. */
extern char D_0013BA10[];
extern char D_0013F400[];
extern int func_056C68(char *p);
extern void func_056E30(char *p);

static __inline__ char *Ctl(unsigned int i)
{
    return i == 0 ? D_0013BA10 : i == 1 ? D_0013F400 : D_0013BA10;
}

void func_041928(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (func_056C68(Ctl(i)) != 0) {
            func_056E30(Ctl(i));
        }
    }
}
