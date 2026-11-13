extern unsigned int func_111BB8(void);
extern unsigned int func_124328(void);
extern void func_0A5090(int);
extern void *D_002E2E20;
extern unsigned int D_001BE930;
void func_124338(void *value, unsigned char mode)
{
    if (func_111BB8() == 1) {
        func_124328();
        D_002E2E20 = value;
        D_001BE930 = mode;
        func_0A5090(mode);
    }
}
