extern void func_073AE0(void);
extern void func_075580(void);
extern void func_074238(void);
extern int func_073430(void *key);
extern int func_075518(void *key);
extern int func_074438(void *key);

int func_075C20(void *key, int target)
{
    if (target == (int)(void *)func_073AE0) {
        return func_073430(key);
    }
    if (target == (int)(void *)func_075580) {
        return func_075518(key);
    }
    if (target == (int)(void *)func_074238) {
        return func_074438(key);
    }
    return 0;
}
