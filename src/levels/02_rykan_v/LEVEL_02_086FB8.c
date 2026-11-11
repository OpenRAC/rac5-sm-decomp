typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_00248430;
extern int func_0831A8(void *);

float func_086FB8(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_00248430.count = D_00248430.count + 1;
        return (float)func_0831A8(object);
    }
    return 0.0f;
}
