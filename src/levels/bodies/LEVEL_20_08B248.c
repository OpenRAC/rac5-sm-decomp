extern void func_08B390(void);
extern unsigned char D_0010C978;
extern char D_0010C8F8[];
extern void *memset(void *, int, unsigned int);

void func_08B248(void)
{
    func_08B390();
    D_0010C978 = 0;
    memset(D_0010C8F8, 0, 0x80);
}
