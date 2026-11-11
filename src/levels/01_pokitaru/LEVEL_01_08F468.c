/* LEVEL_01:0x08F468 -- forwards its first argument and the low byte of its second to the next routine. */
extern void func_08F498(int a, int b);

void func_08F468(int a, unsigned char b)
{
    func_08F498(a, b);
}
