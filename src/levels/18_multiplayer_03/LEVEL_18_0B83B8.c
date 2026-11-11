extern char D_001B0840[];
extern int D_001B058C;

void func_0B83B8(unsigned char value)
{
    char *record = D_001B0840 + D_001B058C * 0x6c;
    record[0x28] = value;
}
