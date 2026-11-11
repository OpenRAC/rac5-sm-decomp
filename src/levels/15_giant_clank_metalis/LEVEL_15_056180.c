typedef struct { char before[0x38]; int value; } State;
extern State D_00181288;
extern void func_0655E8(int);
void func_056180(void)
{
    int value = D_00181288.value;
    if (value != 0) {
        func_0655E8(value);
        D_00181288.value = 0;
    }
}