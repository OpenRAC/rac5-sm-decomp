extern int func_087F08(int mask);
extern char *D_0020E8DC;
char *func_087DA8(int mask)
{
    char *result;
    if (func_087F08(mask) != 0)
        result = D_0020E8DC + 0x1d0;
    else
        result = D_0020E8DC + 0x1e0;
    return result;
}