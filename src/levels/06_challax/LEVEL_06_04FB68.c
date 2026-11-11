typedef struct { char before[0x30]; int value; } State;
extern State D_00225AC8;
extern void func_07A718(int);
void func_04FB68(void)
{
    int value = D_00225AC8.value;
    if (value != 0) {
        func_07A718(value);
        D_00225AC8.value = 0;
    }
}