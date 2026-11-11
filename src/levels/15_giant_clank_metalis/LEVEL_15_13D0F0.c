/* LEVEL_15.REL:0x13D0F0 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002F53A0;

void func_13D0F0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_002F53A0.a = 0;
    D_002F53A0.d = 1.0f;
    D_002F53A0.c = 0;
    D_002F53A0.b = 0;
}
