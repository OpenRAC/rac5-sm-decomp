typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_0021DCB0;
extern int func_0764B8(void *);

float func_07A2C8(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_0021DCB0.count = D_0021DCB0.count + 1;
        return (float)func_0764B8(object);
    }
    return 0.0f;
}
