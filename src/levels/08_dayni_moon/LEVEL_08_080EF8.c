extern void func_07BBC0(void);
extern void func_0807F0(void);
extern void func_07C318(void);
extern void func_07B498(void *object, int value);
extern void func_0807A8(void *object, int value);
extern void func_07C4D0(void *object, int value);

void func_080EF8(void *object, int value, int target)
{
    if (target == (int)(void *)func_07BBC0) {
        func_07B498(object, value);
    } else if (target == (int)(void *)func_0807F0) {
        func_0807A8(object, value);
    } else if (target == (int)(void *)func_07C318) {
        func_07C4D0(object, value);
    }
}
