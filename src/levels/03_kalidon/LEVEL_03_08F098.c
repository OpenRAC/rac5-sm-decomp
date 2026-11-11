/* LEVEL_03:0x08F098 -- placement copy of LEVEL_01_08F468.c: forwards its first argument and the low byte of its second to the next routine. */
extern void func_08F0C8(int a, int b);

void func_08F098(int a, unsigned char b)
{
    func_08F0C8(a, b);
}
