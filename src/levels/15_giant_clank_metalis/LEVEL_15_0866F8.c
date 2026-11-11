extern char D_001CB498[];
extern void func_086990(void *, unsigned int, unsigned char, unsigned char);

void func_0866F8(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_086990(D_001CB498 + index * 0x18, value, first, second);
}
