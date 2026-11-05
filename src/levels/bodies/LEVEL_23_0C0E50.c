extern char D_001D4918[];
extern int D_001D4664;

void func_0C0E50(unsigned char value)
{
    char *record = D_001D4918 + D_001D4664 * 0x6c;
    record[0x28] = value;
}
