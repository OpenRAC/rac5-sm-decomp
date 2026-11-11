extern char D_001D2198[];
extern int D_001D1EE4;

void func_0C38E0(unsigned char value)
{
    char *record = D_001D2198 + D_001D1EE4 * 0x6c;
    record[0x28] = value;
}
