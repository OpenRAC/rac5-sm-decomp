extern void func_09FCA8(void);
extern unsigned char D_001AB718;
extern char D_001AB698[];
extern void *memset(void *, int, unsigned int);

void func_09FB60(void)
{
    func_09FCA8();
    D_001AB718 = 0;
    memset(D_001AB698, 0, 0x80);
}
