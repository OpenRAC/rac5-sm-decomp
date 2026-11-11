extern unsigned char D_0015CEE4;
extern char D_0027E9A0[];
extern void func_0AE538(void);
extern void *memset(void *, int, unsigned int);

void func_0AE668(void)
{
    D_0015CEE4 = 0;
    func_0AE538();
    memset(D_0027E9A0, 0, 0xff);
}
