typedef struct { char before[0x38]; int value; } State;
extern State D_00225ED8;
extern void func_07A718(int);
void func_061CB0(void)
{
    int value = D_00225ED8.value;
    if (value != 0) {
        func_07A718(value);
        D_00225ED8.value = 0;
    }
}