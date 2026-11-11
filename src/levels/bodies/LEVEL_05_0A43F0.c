extern char D_0029F318[];
extern void func_0A4688(void *, unsigned int, unsigned char, unsigned char);

void func_0A43F0(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A4688(D_0029F318 + index * 0x18, value, first, second);
}
