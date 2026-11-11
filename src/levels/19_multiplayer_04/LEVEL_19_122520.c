typedef struct { int before; int disabled; int mode; } State;
extern State D_001BD208;
int func_122520(void)
{
    int result = 0;
    if (D_001BD208.disabled == 0) {
        if (D_001BD208.mode == 2)
            result = 0x20;
        else if (D_001BD208.mode == 3)
            result = 0x22;
    }
    return result;
}