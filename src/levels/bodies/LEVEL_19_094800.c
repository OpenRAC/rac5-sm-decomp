extern char D_0026B128[];
extern void func_094AE8(void *, long long, unsigned char, unsigned char);

void func_094800(int index, long long value, unsigned char first, unsigned char second)
{
    func_094AE8(D_0026B128 + index * 0x18, value, first, second);
}
