extern unsigned int func_1135A8(void);
extern unsigned int func_125BD8(void);
extern void func_0A5990(int);
extern void *D_002E2C20;
extern unsigned int D_001BE628;
void func_125BE8(void *value, unsigned char mode)
{
    if (func_1135A8() == 1) {
        func_125BD8();
        D_002E2C20 = value;
        D_001BE628 = mode;
        func_0A5990(mode);
    }
}
