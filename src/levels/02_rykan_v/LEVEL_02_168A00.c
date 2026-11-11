/* LEVEL_02:0x168A00 -- passes a field handle and a byte selector to a helper, then a stack byte buffer and the selector to a second helper. */
extern void func_1D9698(void *h, unsigned int sel);
extern void func_01AC80(unsigned char *out);
extern void func_167C30(char *obj, unsigned int sel, unsigned char *out);

void func_168A00(char *a0, unsigned char a1)
{
    unsigned char buf[16];

    func_1D9698(*(void **)(a0 + 0xC0), a1);
    func_01AC80(buf);
    func_167C30(a0, a1, buf);
}
