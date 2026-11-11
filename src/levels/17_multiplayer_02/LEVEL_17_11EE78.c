extern long long func_10F088(void);
extern void func_10F150(void);
extern int D_001AF190;

int func_11EE78(void)
{
    if (func_10F088() != 0) {
        func_10F150();
        D_001AF190 = 0;
    }
    return D_001AF190 != 0;
}
