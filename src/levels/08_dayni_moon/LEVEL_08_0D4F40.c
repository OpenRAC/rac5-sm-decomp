extern char D_0024A3D8[];
extern int D_0024A124;

void func_0D4F40(unsigned char value)
{
    char *record = D_0024A3D8 + D_0024A124 * 0x6c;
    record[0x28] = value;
}
