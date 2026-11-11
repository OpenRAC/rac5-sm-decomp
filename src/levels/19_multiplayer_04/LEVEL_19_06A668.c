extern void func_065B80(void);
extern void func_069FC0(void);
extern void func_066328(void);
extern int func_0654D0(void *key);
extern int func_069F58(void *key);
extern int func_066570(void *key);

int func_06A668(void *key, int target)
{
    if (target == (int)(void *)func_065B80) {
        return func_0654D0(key);
    }
    if (target == (int)(void *)func_069FC0) {
        return func_069F58(key);
    }
    if (target == (int)(void *)func_066328) {
        return func_066570(key);
    }
    return 0;
}
