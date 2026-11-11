typedef struct { char before[0x38]; int value; } State;
extern State D_00239158;
extern void func_080B38(int);
void func_064EF0(void)
{
    int value = D_00239158.value;
    if (value != 0) {
        func_080B38(value);
        D_00239158.value = 0;
    }
}