/* LEVEL_19:0x13C0E8 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13C2B0(char *s, char *p, int flag);

int func_13C0E8(char *s)
{
    return func_13C2B0(s, 0, 0) != 0 ? 3 : 0;
}
