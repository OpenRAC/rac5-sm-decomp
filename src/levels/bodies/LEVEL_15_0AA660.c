extern char D_00156198[];
extern int D_00155EE4;

void func_0AA660(unsigned char value)
{
    char *record = D_00156198 + D_00155EE4 * 0x6c;
    record[0x28] = value;
}
