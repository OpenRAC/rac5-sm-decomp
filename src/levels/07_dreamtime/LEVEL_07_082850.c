typedef struct {
    char pad[6];
    unsigned short count;
} Counter;

extern Counter D_00246830;
extern int func_07EA40(void *);

float func_082850(char *object, int mode)
{
    if (object != 0 &&
        *(unsigned char *)(*(char **)(object + 0x40) + 0x3f) == 1 &&
        mode == 3) {
        D_00246830.count = D_00246830.count + 1;
        return (float)func_07EA40(object);
    }
    return 0.0f;
}
