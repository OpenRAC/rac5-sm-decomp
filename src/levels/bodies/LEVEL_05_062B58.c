typedef struct { char before[0x38]; int value; } State;
extern State D_00224E58;
extern void func_07E1D8(int);
void func_062B58(void)
{
    int value = D_00224E58.value;
    if (value != 0) {
        func_07E1D8(value);
        D_00224E58.value = 0;
    }
}