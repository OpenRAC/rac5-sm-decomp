typedef struct { char before[0x38]; int value; } State;
extern State D_001EB828;
extern void func_073680(int);
void func_0578D0(void)
{
    int value = D_001EB828.value;
    if (value != 0) {
        func_073680(value);
        D_001EB828.value = 0;
    }
}