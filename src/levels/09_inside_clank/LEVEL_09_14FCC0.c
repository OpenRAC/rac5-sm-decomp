/* LEVEL_09:0x14FCC0 -- resets the global record when the selection is the
   sentinel and the object is alive: three integer slots to zero, the float
   slot to 1.0 and the trailing global float to 0.36. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037B058;
extern float D_0037B068;

void func_14FCC0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_0037B058.a = 0;
    D_0037B058.b = 0;
    D_0037B058.c = 0;
    D_0037B058.d = 1.0f;
    D_0037B068 = 0.36f;
}
