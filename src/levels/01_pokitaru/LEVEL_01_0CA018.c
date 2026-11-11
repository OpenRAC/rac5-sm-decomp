extern char D_00201518[];
extern int D_00201264;

void func_0CA018(unsigned char value)
{
    char *record = D_00201518 + D_00201264 * 0x6c;
    record[0x28] = value;
}
