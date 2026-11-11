typedef struct { int before; int disabled; int mode; } State;
extern State D_001AF688;
int func_1215E0(void)
{
    int result = 0;
    if (D_001AF688.disabled == 0) {
        if (D_001AF688.mode == 2)
            result = 0x20;
        else if (D_001AF688.mode == 3)
            result = 0x22;
    }
    return result;
}