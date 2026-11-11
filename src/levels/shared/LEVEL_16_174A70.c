/* LEVEL_16.REL:0x174A70 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E5A88;

void func_174A70(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_002E5A88.a = 0;
    D_002E5A88.d = 1.0f;
    D_002E5A88.c = 0;
    D_002E5A88.b = 0;
}
