extern int func_0A1188(void);
extern void func_0A0E40(void *, long long);
extern void func_0A1BB8(void);
extern void func_0A1DE0(long long);
extern void *D_001E57E0;

void func_0A1D98(long long value)
{
    if (func_0A1188() != 0) {
        func_0A0E40(D_001E57E0, value);
        func_0A1BB8();
        func_0A1DE0(value);
    }
}
