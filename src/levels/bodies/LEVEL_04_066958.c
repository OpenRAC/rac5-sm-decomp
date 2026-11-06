typedef struct { char before[0x38]; int value; } State;
extern State D_00253968;
extern void func_083F98(int);
void func_066958(void)
{
    int value = D_00253968.value;
    if (value != 0) {
        func_083F98(value);
        D_00253968.value = 0;
    }
}