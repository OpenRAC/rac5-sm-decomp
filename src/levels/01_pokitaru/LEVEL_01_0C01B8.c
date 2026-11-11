extern unsigned char D_001FDB64;
extern char D_00328DE0[];
extern void func_0C0088(void);
extern void *memset(void *, int, unsigned int);

void func_0C01B8(void)
{
    D_001FDB64 = 0;
    func_0C0088();
    memset(D_00328DE0, 0, 0xff);
}
