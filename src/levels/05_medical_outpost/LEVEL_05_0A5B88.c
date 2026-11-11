extern int func_0A4F78(void);
extern void func_0A4C30(void *, long long);
extern void func_0A59A8(void);
extern void func_0A5BD0(long long);
extern void *D_001E5C60;

void func_0A5B88(long long value)
{
    if (func_0A4F78() != 0) {
        func_0A4C30(D_001E5C60, value);
        func_0A59A8();
        func_0A5BD0(value);
    }
}
