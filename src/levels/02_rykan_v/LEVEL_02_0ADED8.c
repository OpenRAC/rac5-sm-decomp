extern int func_0AD2C8(void);
extern void func_0ACF80(void *, long long);
extern void func_0ADCF8(void);
extern void func_0ADF20(long long);
extern void *D_0020B8A0;

void func_0ADED8(long long value)
{
    if (func_0AD2C8() != 0) {
        func_0ACF80(D_0020B8A0, value);
        func_0ADCF8();
        func_0ADF20(value);
    }
}
