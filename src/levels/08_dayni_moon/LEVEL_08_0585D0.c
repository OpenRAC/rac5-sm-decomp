typedef struct { char before[0x30]; int value; } State;
extern State D_00287FD8;
extern void func_088AA8(int);
void func_0585D0(void)
{
    int value = D_00287FD8.value;
    if (value != 0) {
        func_088AA8(value);
        D_00287FD8.value = 0;
    }
}