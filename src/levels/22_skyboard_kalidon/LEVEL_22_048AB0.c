typedef struct { char before[0x30]; int value; } State;
extern State D_0018A948;
extern void func_073510(int);
void func_048AB0(void)
{
    int value = D_0018A948.value;
    if (value != 0) {
        func_073510(value);
        D_0018A948.value = 0;
    }
}