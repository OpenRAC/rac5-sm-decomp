typedef struct {
    char  pad[0x110];
    float f110;
} Obj;

extern char *D_001C2648;

float func_001200(void)
{
    return ((Obj *)D_001C2648)->f110;
}
