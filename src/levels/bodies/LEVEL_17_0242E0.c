extern unsigned int func_0160C0(void);

float func_0242E0(void)
{
    int mode = (int)func_0160C0();
    float result;
    switch (mode) {
    case 1:
        return 1.1f;
    case 2:
        result = 1.2f;
        break;
    case 3:
        return 1.3f;
    default:
        result = 1.0f;
        break;
    }
    return result;
}
