extern long long func_12C188(void);
extern void func_12C1A0(int);
extern void func_0C1A08(void);
extern void func_12C4E8(int);
extern unsigned char D_001DDCD1;
extern char *D_001DDDAC;

void func_0C68D0(void)
{
    int value = ((int (*)(void))func_12C188)();
    func_12C1A0(0);
    if (D_001DDCD1 != 0) {
        func_0C1A08();
    }
    func_12C1A0(value);
    func_12C4E8(*(int *)(D_001DDDAC + 0x3c));
}
