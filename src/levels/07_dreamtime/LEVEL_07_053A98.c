typedef struct { char before[0x30]; int value; } State;
extern State D_0024E648;
extern void func_082CA0(int);
void func_053A98(void)
{
    int value = D_0024E648.value;
    if (value != 0) {
        func_082CA0(value);
        D_0024E648.value = 0;
    }
}