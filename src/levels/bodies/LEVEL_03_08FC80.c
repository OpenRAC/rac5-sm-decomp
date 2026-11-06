extern char D_002AFC28[];
extern void *memset(void *, int, unsigned int);
extern void func_091000(void);

void func_08FC80(void)
{
    memset(D_002AFC28, 0, 0x3000);
    func_091000();
}
