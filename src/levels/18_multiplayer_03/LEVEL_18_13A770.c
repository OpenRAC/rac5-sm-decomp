/* LEVEL_18:0x13A770 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13A7A0(char *s, char *p, int flag);

int func_13A770(char *s)
{
    return func_13A7A0(s, 0, 0) != 0 ? 3 : 0;
}
