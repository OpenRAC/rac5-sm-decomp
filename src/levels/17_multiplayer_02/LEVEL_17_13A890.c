/* LEVEL_17:0x13A890 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13A8C0(char *s, char *p, int flag);

int func_13A890(char *s)
{
    return func_13A8C0(s, 0, 0) != 0 ? 3 : 0;
}
