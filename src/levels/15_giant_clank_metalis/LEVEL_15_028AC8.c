/* LEVEL_15.REL:0x028AC8 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0017A970;

void func_028AC8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_0017A970.a = 0;
    D_0017A970.d = 1.0f;
    D_0017A970.c = 0;
    D_0017A970.b = 0;
}
