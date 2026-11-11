typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_00182B30;
extern int func_06F3C0(void *);

float func_0730C0(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_00182B30.count = D_00182B30.count + 1;
        return (float)func_06F3C0(object);
    }
    return 0.0f;
}
