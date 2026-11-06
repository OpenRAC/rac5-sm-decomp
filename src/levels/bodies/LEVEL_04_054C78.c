typedef struct { char before[0x30]; int value; } State;
extern State D_00253558;
extern void func_083F98(int);
void func_054C78(void)
{
    int value = D_00253558.value;
    if (value != 0) {
        func_083F98(value);
        D_00253558.value = 0;
    }
}