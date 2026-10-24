typedef struct {
    char  pad[0x110];
    float f110;
} Obj;

extern char *D_0014E5C8;

float func_000F70(void)
{
    return ((Obj *)D_0014E5C8)->f110;
}
