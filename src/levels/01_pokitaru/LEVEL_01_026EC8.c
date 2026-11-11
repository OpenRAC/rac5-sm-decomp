extern unsigned int func_018120(void);

float func_026EC8(void)
{
    int mode = (int)func_018120();
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
