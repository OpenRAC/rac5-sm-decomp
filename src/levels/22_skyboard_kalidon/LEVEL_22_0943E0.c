extern char D_00209018[];
extern void func_094700(void *, unsigned char);

void func_0943E0(int index, unsigned char value)
{
    func_094700(D_00209018 + index * 0x18, value);
}
