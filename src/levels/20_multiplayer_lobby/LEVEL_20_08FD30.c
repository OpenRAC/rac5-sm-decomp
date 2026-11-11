extern void func_08FDE0(void);
extern unsigned char D_0010CEF8;
extern char D_0010CE78[];
extern void *memset(void *, int, unsigned int);

void func_08FD30(void)
{
    func_08FDE0();
    D_0010CEF8 = 0;
    memset(D_0010CE78, 0, 0x80);
}
