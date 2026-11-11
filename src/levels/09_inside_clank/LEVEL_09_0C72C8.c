extern char D_001EB318[];
extern int D_001EB064;

void func_0C72C8(unsigned char value)
{
    char *record = D_001EB318 + D_001EB064 * 0x6c;
    record[0x28] = value;
}
