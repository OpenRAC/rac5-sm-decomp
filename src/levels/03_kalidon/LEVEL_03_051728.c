typedef struct { char before[0x30]; int value; } State;
extern State D_00253BC8;
extern void func_080918(int);
void func_051728(void)
{
    int value = D_00253BC8.value;
    if (value != 0) {
        func_080918(value);
        D_00253BC8.value = 0;
    }
}