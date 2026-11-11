extern char D_0018E7E8[];
extern void func_07F980(void *, unsigned char);

void func_07F638(int index, unsigned char value)
{
    func_07F980(D_0018E7E8 + index * 0x18, value);
}
