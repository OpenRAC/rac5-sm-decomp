/* LEVEL_15.REL:0x0C1428 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00244F28;

void func_0C1428(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_00244F28.a = 0;
    D_00244F28.d = 1.0f;
    D_00244F28.c = 0;
    D_00244F28.b = 0;
}
