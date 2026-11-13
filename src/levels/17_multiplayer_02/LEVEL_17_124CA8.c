extern unsigned int func_112590(void);
extern unsigned int func_124C98(void);
extern void func_0A55F8(int);
extern void *D_002D3DA0;
extern unsigned int D_001B0AA8;
void func_124CA8(void *value, unsigned char mode)
{
    if (func_112590() == 1) {
        func_124C98();
        D_002D3DA0 = value;
        D_001B0AA8 = mode;
        func_0A55F8(mode);
    }
}
