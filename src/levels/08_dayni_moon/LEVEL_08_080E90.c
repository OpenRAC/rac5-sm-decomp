extern void func_07BBC0(void);
extern void func_0807F0(void);
extern void func_07C318(void);
extern int func_07B510(void *key);
extern int func_080788(void *key);
extern int func_07C518(void *key);

int func_080E90(void *key, int target)
{
    if (target == (int)(void *)func_07BBC0) {
        return func_07B510(key);
    }
    if (target == (int)(void *)func_0807F0) {
        return func_080788(key);
    }
    if (target == (int)(void *)func_07C318) {
        return func_07C518(key);
    }
    return 0;
}
