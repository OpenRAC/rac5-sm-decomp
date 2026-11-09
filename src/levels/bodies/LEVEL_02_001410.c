/* LEVEL_02:0x001410 -- stores a float into a record field, then forwards the call result. */
extern char *D_00203EC8;
extern float func_0829A0(float);
extern void func_001458(float);

void func_001410(float value)
{
    float result;
    *(float *)(D_00203EC8 + 0xf8) = value;
    result = func_0829A0(value);
    func_001458(result);
}
