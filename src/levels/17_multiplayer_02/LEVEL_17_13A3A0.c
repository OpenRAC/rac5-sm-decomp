/* LEVEL_17:0x13A3A0 -- placement copy of LEVEL_16_13E990.c: returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13A3D0(char *s, char *p, int flag);

int func_13A3A0(char *s)
{
    return func_13A3D0(s, 0, 0) != 0 ? 3 : 0;
}
