typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_0024B730;
extern int func_07FD38(void *);

float func_083B48(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_0024B730.count = D_0024B730.count + 1;
        return (float)func_07FD38(object);
    }
    return 0.0f;
}
