extern char D_003026D8[];
extern void func_0B09C0(void *, long long, unsigned char, unsigned char);

void func_0B0728(int index, long long value, unsigned char first, unsigned char second)
{
    func_0B09C0(D_003026D8 + index * 0x18, value, first, second);
}
