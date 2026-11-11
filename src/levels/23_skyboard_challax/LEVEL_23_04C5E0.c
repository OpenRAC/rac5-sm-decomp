typedef struct { char before[0x30]; int value; } State;
extern State D_002061C8;
extern void func_077F38(int);
void func_04C5E0(void)
{
    int value = D_002061C8.value;
    if (value != 0) {
        func_077F38(value);
        D_002061C8.value = 0;
    }
}