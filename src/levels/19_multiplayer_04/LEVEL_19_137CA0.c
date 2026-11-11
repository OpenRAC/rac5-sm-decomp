/* LEVEL_19:0x137CA0 -- placement copy of LEVEL_16_13B6C0.c: asks func_137CD8 whether the object accepts the request (flag set for kinds 10 and 11) and answers 3 or 0. */
extern int func_137CD8(char *obj, int a1, int a2, int a3);

int func_137CA0(char *o, unsigned int kind)
{
    return func_137CD8(o, 0, kind - 10 < 2, 0) != 0 ? 3 : 0;
}
