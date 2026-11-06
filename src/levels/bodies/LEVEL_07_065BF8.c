typedef struct { char before[0x38]; int value; } State;
extern State D_0024EA58;
extern void func_082CA0(int);
void func_065BF8(void)
{
    int value = D_0024EA58.value;
    if (value != 0) {
        func_082CA0(value);
        D_0024EA58.value = 0;
    }
}