typedef struct { int before; int disabled; int mode; } State;
extern State D_001BD510;
int func_120C70(void)
{
    int result = 0;
    if (D_001BD510.disabled == 0) {
        if (D_001BD510.mode == 2)
            result = 0x20;
        else if (D_001BD510.mode == 3)
            result = 0x22;
    }
    return result;
}