extern unsigned char D_001CE7E4;
extern char D_002F4CA0[];
extern void func_0B9950(void);
extern void *memset(void *, int, unsigned int);

void func_0B9A80(void)
{
    D_001CE7E4 = 0;
    func_0B9950();
    memset(D_002F4CA0, 0, 0xff);
}
