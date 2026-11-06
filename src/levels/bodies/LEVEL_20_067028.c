extern int func_0672F8(void);
extern char *D_0010696C;
char *func_067028(void)
{
    char *result;
    if (func_0672F8() != 0)
        result = D_0010696C + 0x104;
    else
        result = D_0010696C + 0x148;
    return result;
}