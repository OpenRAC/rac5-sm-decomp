typedef struct { char before[0x38]; int value; } State;
extern State D_001DCB28;
extern void func_073DB0(int);
void func_057300(void)
{
    int value = D_001DCB28.value;
    if (value != 0) {
        func_073DB0(value);
        D_001DCB28.value = 0;
    }
}