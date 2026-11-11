extern char D_0020A518[];
extern int D_0020A264;

void func_0CB458(unsigned char value)
{
    char *record = D_0020A518 + D_0020A264 * 0x6c;
    record[0x28] = value;
}
