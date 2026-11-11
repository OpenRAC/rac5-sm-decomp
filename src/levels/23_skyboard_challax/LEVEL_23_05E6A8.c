typedef struct { char before[0x38]; int value; } State;
extern State D_002065D8;
extern void func_077F38(int);
void func_05E6A8(void)
{
    int value = D_002065D8.value;
    if (value != 0) {
        func_077F38(value);
        D_002065D8.value = 0;
    }
}