extern char D_001AF3C0[];
extern int D_001AF10C;

void func_0B93E0(unsigned char value)
{
    char *record = D_001AF3C0 + D_001AF10C * 0x6c;
    record[0x28] = value;
}
