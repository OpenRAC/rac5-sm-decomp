typedef struct { char before[0x38]; int value; } State;
extern State D_00250668;
extern void func_087408(int);
void func_069F68(void)
{
    int value = D_00250668.value;
    if (value != 0) {
        func_087408(value);
        D_00250668.value = 0;
    }
}