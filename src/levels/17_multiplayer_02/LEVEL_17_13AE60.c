/* LEVEL_17:0x13AE60 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13B028(char *s, char *p, int flag);

int func_13AE60(char *s)
{
    return func_13B028(s, 0, 0) != 0 ? 3 : 0;
}
