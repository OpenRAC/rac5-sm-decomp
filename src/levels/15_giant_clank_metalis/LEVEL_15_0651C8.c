typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_001790B0;
extern int func_061690(void *);

float func_0651C8(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_001790B0.count = D_001790B0.count + 1;
        return (float)func_061690(object);
    }
    return 0.0f;
}
