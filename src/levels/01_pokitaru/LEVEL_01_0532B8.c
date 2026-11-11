typedef struct { char before[0x30]; int value; } State;
extern State D_00238D48;
extern void func_080B38(int);
void func_0532B8(void)
{
    int value = D_00238D48.value;
    if (value != 0) {
        func_080B38(value);
        D_00238D48.value = 0;
    }
}