extern char D_00219B98[];
extern int D_002198E4;

void func_0C9E00(unsigned char value)
{
    char *record = D_00219B98 + D_002198E4 * 0x6c;
    record[0x28] = value;
}
