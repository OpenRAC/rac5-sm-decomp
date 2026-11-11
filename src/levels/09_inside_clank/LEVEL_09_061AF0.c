typedef struct { char before[0x38]; int value; } State;
extern State D_002208D8;
extern void func_07D5B8(int);
void func_061AF0(void)
{
    int value = D_002208D8.value;
    if (value != 0) {
        func_07D5B8(value);
        D_002208D8.value = 0;
    }
}