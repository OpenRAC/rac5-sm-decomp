typedef struct { char before[0x38]; int value; } State;
extern State D_001EB9A8;
extern void func_0737C8(int);
void func_056D30(void)
{
    int value = D_001EB9A8.value;
    if (value != 0) {
        func_0737C8(value);
        D_001EB9A8.value = 0;
    }
}