extern unsigned char D_00217024;
extern char D_003435E0[];
extern void func_0C58A0(void);
extern void *memset(void *, int, unsigned int);

void func_0C59D0(void)
{
    D_00217024 = 0;
    func_0C58A0();
    memset(D_003435E0, 0, 0xff);
}
