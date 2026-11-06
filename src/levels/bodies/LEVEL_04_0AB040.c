extern char D_002CDC58[];
extern void func_0AB2D8(void *, long long, unsigned char, unsigned char);

void func_0AB040(int index, long long value, unsigned char first, unsigned char second)
{
    func_0AB2D8(D_002CDC58 + index * 0x18, value, first, second);
}
