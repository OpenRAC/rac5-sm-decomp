typedef struct { char before[0x30]; int value; } State;
extern State D_00250258;
extern void func_087408(int);
void func_0581E0(void)
{
    int value = D_00250258.value;
    if (value != 0) {
        func_087408(value);
        D_00250258.value = 0;
    }
}