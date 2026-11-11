extern char D_001A29C0[];
extern int D_001A270C;

void func_0B8920(unsigned char value)
{
    char *record = D_001A29C0 + D_001A270C * 0x6c;
    record[0x28] = value;
}
