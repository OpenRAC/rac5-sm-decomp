typedef struct { char before[0x30]; int value; } State;
extern State D_00204C48;
extern void func_07B218(int);
void func_04C3F8(void)
{
    int value = D_00204C48.value;
    if (value != 0) {
        func_07B218(value);
        D_00204C48.value = 0;
    }
}