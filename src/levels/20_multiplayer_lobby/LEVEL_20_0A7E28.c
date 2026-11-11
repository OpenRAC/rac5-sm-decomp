/* LEVEL_20:0x0A7E28 -- resets the global record when the selection is the
   sentinel and the object is alive: three integer slots to zero, the float
   slot to 1.0 and the trailing global float to the global float. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0019D9C0;
extern float D_0019D9D0;
extern float D_00113224;

void func_0A7E28(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_0019D9C0.a = 0;
    D_0019D9C0.b = 0;
    D_0019D9C0.c = 0;
    D_0019D9C0.d = 1.0f;
    D_0019D9D0 = D_00113224;
}
