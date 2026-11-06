typedef struct { char before[0x30]; int value; } State;
extern State D_00242148;
extern void func_081168(int);
void func_051B70(void)
{
    int value = D_00242148.value;
    if (value != 0) {
        func_081168(value);
        D_00242148.value = 0;
    }
}