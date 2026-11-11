/* LEVEL_16:0x13EE80 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13EEB0(char *s, char *p, int flag);

int func_13EE80(char *s)
{
    return func_13EEB0(s, 0, 0) != 0 ? 3 : 0;
}
