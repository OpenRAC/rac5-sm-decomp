typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_001FCE30;
extern int func_076FB8(void *);

float func_07ADC8(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_001FCE30.count = D_001FCE30.count + 1;
        return (float)func_076FB8(object);
    }
    return 0.0f;
}
