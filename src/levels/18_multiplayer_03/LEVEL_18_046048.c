/* LEVEL_18:0x046048 -- placement copy of LEVEL_16_047808.c: runs the query and update helpers on each of the two controller records. */
extern char D_001E4410[];
extern char D_001E7E00[];
extern int func_05C148(char *p);
extern void func_05C320(char *p);

static __inline__ char *Ctl(unsigned int i)
{
    return i == 0 ? D_001E4410 : i == 1 ? D_001E7E00 : D_001E4410;
}

void func_046048(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (func_05C148(Ctl(i)) != 0) {
            func_05C320(Ctl(i));
        }
    }
}
