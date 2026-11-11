/* LEVEL_16:0x13F450 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13F618(char *s, char *p, int flag);

int func_13F450(char *s)
{
    return func_13F618(s, 0, 0) != 0 ? 3 : 0;
}
