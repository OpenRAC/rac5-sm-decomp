extern char D_001B0540[];
extern int D_001B028C;

void func_0B8CB8(unsigned char value)
{
    char *record = D_001B0540 + D_001B028C * 0x6c;
    record[0x28] = value;
}
