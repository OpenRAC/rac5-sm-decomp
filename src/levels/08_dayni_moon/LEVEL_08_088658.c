typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_002801B0;
extern int func_084848(void *);

float func_088658(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_002801B0.count = D_002801B0.count + 1;
        return (float)func_084848(object);
    }
    return 0.0f;
}
