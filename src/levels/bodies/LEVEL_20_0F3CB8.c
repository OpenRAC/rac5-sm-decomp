typedef struct { int before; int disabled; int mode; } State;
extern State D_0011E730;
int func_0F3CB8(void)
{
    int result = 0;
    if (D_0011E730.disabled == 0) {
        if (D_0011E730.mode == 2)
            result = 0x20;
        else if (D_0011E730.mode == 3)
            result = 0x22;
    }
    return result;
}