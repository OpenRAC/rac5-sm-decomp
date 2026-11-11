extern char D_001F0898[];
extern int D_001F05E4;

void func_0C85C0(unsigned char value)
{
    char *record = D_001F0898 + D_001F05E4 * 0x6c;
    record[0x28] = value;
}
