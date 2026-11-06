typedef struct { char before[0x30]; int value; } State;
extern State D_00180E78;
extern void func_0655E8(int);
void func_044548(void)
{
    int value = D_00180E78.value;
    if (value != 0) {
        func_0655E8(value);
        D_00180E78.value = 0;
    }
}