extern char D_002164D8[];
extern int D_00216224;

void func_0D0928(unsigned char value)
{
    char *record = D_002164D8 + D_00216224 * 0x6c;
    record[0x28] = value;
}
