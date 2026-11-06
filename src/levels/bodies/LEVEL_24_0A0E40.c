extern int func_0A0230(void);
extern void func_09FEE8(void *, long long);
extern void func_0A0C60(void);
extern void func_0A0E88(long long);
extern void *D_001C7560;

void func_0A0E40(long long value)
{
    if (func_0A0230() != 0) {
        func_09FEE8(D_001C7560, value);
        func_0A0C60();
        func_0A0E88(value);
    }
}
