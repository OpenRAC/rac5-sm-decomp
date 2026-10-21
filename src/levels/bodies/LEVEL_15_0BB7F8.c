/* LEVEL_15.REL:0x0BB7F8 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00244E58;

void func_0BB7F8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_00244E58.a = 0;
    D_00244E58.d = 1.0f;
    D_00244E58.c = 0;
    D_00244E58.b = 0;
}
