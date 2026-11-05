extern char D_001F0418[];
extern int D_001F0164;

void func_0C4918(unsigned char value)
{
    char *record = D_001F0418 + D_001F0164 * 0x6c;
    record[0x28] = value;
}
