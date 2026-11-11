/* LEVEL_15.REL:0x0A5098 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00240D00;

void func_0A5098(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_00240D00.a = 0;
    D_00240D00.d = 1.0f;
    D_00240D00.c = 0;
    D_00240D00.b = 0;
}
