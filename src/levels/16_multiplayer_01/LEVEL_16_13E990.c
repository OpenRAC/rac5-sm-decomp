/* LEVEL_16:0x13E990 -- returns 3 when the string helper accepts the string, otherwise 0. */
extern int func_13E9C0(char *s, char *p, int flag);

int func_13E990(char *s)
{
    return func_13E9C0(s, 0, 0) != 0 ? 3 : 0;
}
