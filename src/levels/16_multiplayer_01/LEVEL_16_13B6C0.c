/* LEVEL_16:0x13B6C0 -- asks func_13B6F8 whether the object accepts the request (flag set for kinds 10 and 11) and answers 3 or 0. */
extern int func_13B6F8(char *obj, int a1, int a2, int a3);

int func_13B6C0(char *o, unsigned int kind)
{
    return func_13B6F8(o, 0, kind - 10 < 2, 0) != 0 ? 3 : 0;
}
