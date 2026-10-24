typedef struct {
    char pad[0x110];
    float v;
} Obj;

extern int D_0019C14C;

float f(void)
{
    return ((Obj *)D_0019C14C)->v;
}
