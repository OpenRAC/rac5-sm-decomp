typedef struct {
    char pad[0xF8];
    float v;
} Obj;

extern int D_001BFEC8;

float f(void)
{
    return ((Obj *)D_001BFEC8)->v;
}
