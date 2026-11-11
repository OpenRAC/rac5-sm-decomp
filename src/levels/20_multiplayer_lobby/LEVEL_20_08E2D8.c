extern int func_08E2C8(void);
extern unsigned int D_0010CAC4;

int func_08E2D8(unsigned char value)
{
    int result = func_08E2C8();
    D_0010CAC4 = value;
    return result;
}
