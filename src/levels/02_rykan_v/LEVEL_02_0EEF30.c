extern void func_0EEE20(void *r, void *tag, unsigned int flags, float lo, float hi, float z);

void func_0EEF30(void *a, void *b, unsigned int c, unsigned int d, unsigned int e, float lo, float hi, float z)
{
    unsigned int fields = (e << 27) | (c << 16);
    unsigned int flags = (d << 6) | 0x7000u;
    unsigned int value = fields | flags;
    func_0EEE20(a, b, value | 1u, lo, hi, z);
}