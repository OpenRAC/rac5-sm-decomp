extern unsigned int func_0166A0(void);

float func_024960(void)
{
    int mode = (int)func_0166A0();
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
