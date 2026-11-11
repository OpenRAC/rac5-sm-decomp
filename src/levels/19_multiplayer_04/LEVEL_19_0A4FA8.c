extern void func_0A50D8(void);
extern unsigned char D_001AB998;
extern char D_001AB918[];
extern void *memset(void *, int, unsigned int);

void func_0A4FA8(void)
{
    func_0A50D8();
    D_001AB998 = 0;
    memset(D_001AB918, 0, 0x80);
}
