/* LEVEL_16:0x047808 -- runs the query and update helpers on each of the two controller records. */
extern char D_001E4090[];
extern char D_001E7A80[];
extern int func_05D640(char *p);
extern void func_05D818(char *p);

static __inline__ char *Ctl(unsigned int i)
{
    return i == 0 ? D_001E4090 : i == 1 ? D_001E7A80 : D_001E4090;
}

void func_047808(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (func_05D640(Ctl(i)) != 0) {
            func_05D818(Ctl(i));
        }
    }
}
