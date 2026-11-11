/* LEVEL_19:0x13AF70 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13AFA0(char *s, char *p, int flag);

int func_13AF70(char *s)
{
    return func_13AFA0(s, 0, 0) != 0 ? 3 : 0;
}
