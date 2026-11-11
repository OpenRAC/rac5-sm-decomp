/* LEVEL_18:0x13AD40 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13AF08(char *s, char *p, int flag);

int func_13AD40(char *s)
{
    return func_13AF08(s, 0, 0) != 0 ? 3 : 0;
}
