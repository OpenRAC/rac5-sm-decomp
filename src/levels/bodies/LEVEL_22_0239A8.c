extern void func_0FC458(char *a, char *b, float c);
extern void pose3(char *a, float c, char *b) __asm__("func_0FC458");

void f(char *a0)
{
    func_0FC458(a0 + 0xF0, a0 + 0x10, *(float *)(a0 + 0x58));
    func_0FC458(a0 + 0x134, a0 + 0x28, -*(float *)(a0 + 0x58));
    pose3(a0 + 0x178, *(float *)(a0 + 0x84), a0 + 0x1C);
}
