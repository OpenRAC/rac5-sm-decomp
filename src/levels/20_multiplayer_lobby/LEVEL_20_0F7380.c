extern unsigned int func_0E5970(void);
extern unsigned int func_0F7370(void);
extern void func_090698(int);
extern void *D_00205FE0;
extern unsigned int D_0011FB50;
void func_0F7380(void *value, unsigned char mode)
{
    if (func_0E5970() == 1) {
        func_0F7370();
        D_00205FE0 = value;
        D_0011FB50 = mode;
        func_090698(mode);
    }
}
