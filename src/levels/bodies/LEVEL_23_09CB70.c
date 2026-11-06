extern char D_00284898[];
extern void func_09CE30(void *, long long, unsigned char, unsigned char);

void func_09CB70(int index, long long value, unsigned char first, unsigned char second)
{
    func_09CE30(D_00284898 + index * 0x18, value, first, second);
}
