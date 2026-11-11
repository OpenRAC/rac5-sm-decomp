extern char D_00111AA0[];
extern int D_001117EC;

void func_0A3910(unsigned char value)
{
    char *record = D_00111AA0 + D_001117EC * 0x6c;
    record[0x28] = value;
}
