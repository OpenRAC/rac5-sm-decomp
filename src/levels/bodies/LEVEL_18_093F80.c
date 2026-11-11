extern char D_0026B328[];
extern void func_094268(void *, unsigned int, unsigned char, unsigned char);

void func_093F80(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_094268(D_0026B328 + index * 0x18, value, first, second);
}
