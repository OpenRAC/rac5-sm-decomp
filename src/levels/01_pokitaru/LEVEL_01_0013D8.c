typedef struct {
    char  pad[0xF8];
    float fF8;
} Obj;

extern char *D_001EF248;

float func_0013D8(void)
{
    return ((Obj *)D_001EF248)->fF8;
}
