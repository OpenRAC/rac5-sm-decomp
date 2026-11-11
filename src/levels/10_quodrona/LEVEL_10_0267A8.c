extern unsigned int func_017788(void);

float func_0267A8(void)
{
    int mode = (int)func_017788();
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
