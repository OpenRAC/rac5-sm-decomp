typedef struct {
    char  pad[0x110];
    float f110;
} Obj;

extern char *D_002083C8;

float func_001008(void)
{
    return ((Obj *)D_002083C8)->f110;
}
