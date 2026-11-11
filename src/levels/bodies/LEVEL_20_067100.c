extern int func_0672F8(void);
extern char *D_0010696C;
char *func_067100(int a)
{
    char *result;
    if (func_0672F8() != 0)
        result = D_0010696C + 0x1d0;
    else
        result = D_0010696C + 0x1e0;
    return result;
}