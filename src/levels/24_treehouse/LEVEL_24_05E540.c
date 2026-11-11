typedef struct { char before[0x38]; int value; } State;
extern State D_00205058;
extern void func_07B218(int);
void func_05E540(void)
{
    int value = D_00205058.value;
    if (value != 0) {
        func_07B218(value);
        D_00205058.value = 0;
    }
}