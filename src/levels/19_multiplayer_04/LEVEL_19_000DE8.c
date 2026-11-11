typedef struct {
    char  pad[0x10C];
    float f10C;
} Obj;

extern char *D_0019BE4C;

float func_000DE8(void)
{
    return ((Obj *)D_0019BE4C)->f10C;
}
