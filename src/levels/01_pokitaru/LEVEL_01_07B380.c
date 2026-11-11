extern char *D_001F6140;
extern char D_0023A730[];

void func_07B380(char *value)
{
    if (value == 0)
        D_001F6140 = D_0023A730;
    else
        D_001F6140 = value;
}
