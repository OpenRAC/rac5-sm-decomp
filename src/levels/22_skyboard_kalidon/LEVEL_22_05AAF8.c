typedef struct { char before[0x38]; int value; } State;
extern State D_0018AD58;
extern void func_073510(int);
void func_05AAF8(void)
{
    int value = D_0018AD58.value;
    if (value != 0) {
        func_073510(value);
        D_0018AD58.value = 0;
    }
}