extern char D_00280C68[];
extern void *memset(void *, int, unsigned int);
extern void func_08EAC8(void);

void func_08D748(void)
{
    memset(D_00280C68, 0, 0x3000);
    func_08EAC8();
}
