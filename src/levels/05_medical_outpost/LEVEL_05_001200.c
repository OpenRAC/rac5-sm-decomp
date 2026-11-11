typedef struct {
    char pad[0x110];
    float v;
} Obj;

extern int D_001DE5C8;

float f(void)
{
    return ((Obj *)D_001DE5C8)->v;
}
