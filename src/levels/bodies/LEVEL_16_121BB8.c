typedef struct { int before; int disabled; int mode; } State;
extern State D_001BC090;
int func_121BB8(void)
{
    int result = 0;
    if (D_001BC090.disabled == 0) {
        if (D_001BC090.mode == 2)
            result = 0x20;
        else if (D_001BC090.mode == 3)
            result = 0x22;
    }
    return result;
}