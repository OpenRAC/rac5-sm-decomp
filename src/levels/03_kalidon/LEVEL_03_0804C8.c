typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_0024BDB0;
extern int func_07C6B8(void *);

float func_0804C8(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_0024BDB0.count = D_0024BDB0.count + 1;
        return (float)func_07C6B8(object);
    }
    return 0.0f;
}
