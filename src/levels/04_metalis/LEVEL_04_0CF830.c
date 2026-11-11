extern char D_0021A9D8[];
extern int D_0021A724;

void func_0CF830(unsigned char value)
{
    char *record = D_0021A9D8 + D_0021A724 * 0x6c;
    record[0x28] = value;
}
