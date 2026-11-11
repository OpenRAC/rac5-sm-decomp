typedef struct { char before[0x30]; int value; } State;
extern State D_002204C8;
extern void func_07D5B8(int);
void func_04F9A8(void)
{
    int value = D_002204C8.value;
    if (value != 0) {
        func_07D5B8(value);
        D_002204C8.value = 0;
    }
}