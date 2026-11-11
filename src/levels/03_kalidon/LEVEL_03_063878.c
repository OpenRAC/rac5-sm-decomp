typedef struct { char before[0x38]; int value; } State;
extern State D_00253FD8;
extern void func_080918(int);
void func_063878(void)
{
    int value = D_00253FD8.value;
    if (value != 0) {
        func_080918(value);
        D_00253FD8.value = 0;
    }
}