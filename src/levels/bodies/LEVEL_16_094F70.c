extern char D_0026AFA8[];
extern void func_095258(void *, unsigned int, unsigned char, unsigned char);

void func_094F70(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_095258(D_0026AFA8 + index * 0x18, value, first, second);
}
