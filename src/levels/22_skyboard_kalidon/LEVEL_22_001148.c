typedef struct {
    char pad[0xF8];
    float v;
} Obj;

extern int D_0014E5C8;

float f(void)
{
    return ((Obj *)D_0014E5C8)->v;
}
