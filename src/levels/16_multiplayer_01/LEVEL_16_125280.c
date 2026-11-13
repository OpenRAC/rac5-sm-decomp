extern unsigned int func_112E00(void);
extern unsigned int func_125270(void);
extern void func_0A6118(int);
extern void *D_002E2AA0;
extern unsigned int D_001BD4B0;
void func_125280(void *value, unsigned char mode)
{
    if (func_112E00() == 1) {
        func_125270();
        D_002E2AA0 = value;
        D_001BD4B0 = mode;
        func_0A6118(mode);
    }
}
