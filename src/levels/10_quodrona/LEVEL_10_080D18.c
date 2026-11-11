typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_0023A330;
extern int func_07CEF0(void *);

float func_080D18(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_0023A330.count = D_0023A330.count + 1;
        return (float)func_07CEF0(object);
    }
    return 0.0f;
}
