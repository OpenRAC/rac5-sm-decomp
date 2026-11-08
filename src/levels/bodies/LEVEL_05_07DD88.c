typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_0021CC30;
extern int func_079F48(void *);

float func_07DD88(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_0021CC30.count = D_0021CC30.count + 1;
        return (float)func_079F48(object);
    }
    return 0.0f;
}
