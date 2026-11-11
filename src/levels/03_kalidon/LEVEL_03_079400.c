extern void func_074898(void);
extern void func_078D60(void);
extern void func_074FF0(void);
extern int func_0741E8(void *key);
extern int func_078CF8(void *key);
extern int func_0751F0(void *key);

int func_079400(void *key, int target)
{
    if (target == (int)(void *)func_074898) {
        return func_0741E8(key);
    }
    if (target == (int)(void *)func_078D60) {
        return func_078CF8(key);
    }
    if (target == (int)(void *)func_074FF0) {
        return func_0751F0(key);
    }
    return 0;
}
