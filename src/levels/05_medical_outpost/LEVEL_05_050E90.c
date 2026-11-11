typedef struct { char before[0x30]; int value; } State;
extern State D_00224A48;
extern void func_07E1D8(int);
void func_050E90(void)
{
    int value = D_00224A48.value;
    if (value != 0) {
        func_07E1D8(value);
        D_00224A48.value = 0;
    }
}