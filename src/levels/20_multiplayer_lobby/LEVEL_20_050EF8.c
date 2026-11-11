typedef struct { char before[0x38]; int value; } State;
extern State D_00143158;
extern void func_062640(int);
void func_050EF8(void)
{
    int value = D_00143158.value;
    if (value != 0) {
        func_062640(value);
        D_00143158.value = 0;
    }
}