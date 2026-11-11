extern void func_0715D8(void);
extern void func_075A70(void);
extern void func_071D08(void);
extern int func_070F28(void *key);
extern int func_075A08(void *key);
extern int func_071F08(void *key);

int func_076110(void *key, int target)
{
    if (target == (int)(void *)func_0715D8) {
        return func_070F28(key);
    }
    if (target == (int)(void *)func_075A70) {
        return func_075A08(key);
    }
    if (target == (int)(void *)func_071D08) {
        return func_071F08(key);
    }
    return 0;
}
