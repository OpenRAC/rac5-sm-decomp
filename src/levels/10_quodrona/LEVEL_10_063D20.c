typedef struct { char before[0x38]; int value; } State;
extern State D_00242558;
extern void func_081168(int);
void func_063D20(void)
{
    int value = D_00242558.value;
    if (value != 0) {
        func_081168(value);
        D_00242558.value = 0;
    }
}