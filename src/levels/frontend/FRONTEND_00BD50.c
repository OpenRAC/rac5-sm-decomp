/* FRONTEND:0x00BD50 -- masks the four arguments to 16 bits. */
void func_00BDA8(unsigned int, unsigned int, unsigned int, unsigned int);

void func_00BD50(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    func_00BDA8(a & 0xFFFF, b & 0xFFFF, c & 0xFFFF, d & 0xFFFF);
}
