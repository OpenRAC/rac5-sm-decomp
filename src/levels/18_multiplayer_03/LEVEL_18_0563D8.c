typedef struct { char before[0x38]; int value; } State;
extern State D_001EBBA8;
extern void func_072D30(int);
void func_0563D8(void)
{
    int value = D_001EBBA8.value;
    if (value != 0) {
        func_072D30(value);
        D_001EBBA8.value = 0;
    }
}