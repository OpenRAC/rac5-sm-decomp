typedef struct { char before[0x38]; int value; } State;
extern State D_002883E8;
extern void func_088AA8(int);
void func_06A718(void)
{
    int value = D_002883E8.value;
    if (value != 0) {
        func_088AA8(value);
        D_002883E8.value = 0;
    }
}