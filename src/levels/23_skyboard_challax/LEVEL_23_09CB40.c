extern char D_00284898[];
extern void func_09CE60(void *, unsigned char);

void func_09CB40(int index, unsigned char value)
{
    func_09CE60(D_00284898 + index * 0x18, value);
}
