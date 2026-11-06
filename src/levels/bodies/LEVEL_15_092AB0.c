extern void func_092BF8(void);
extern unsigned char D_00150ED8;
extern char D_00150E58[];
extern void *memset(void *, int, unsigned int);

void func_092AB0(void)
{
    func_092BF8();
    D_00150ED8 = 0;
    memset(D_00150E58, 0, 0x80);
}
