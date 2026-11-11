/* LEVEL_15.REL:0x020DC0 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00177E40;

void func_020DC0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_00177E40.a = 0;
    D_00177E40.d = 1.0f;
    D_00177E40.c = 0;
    D_00177E40.b = 0;
}
