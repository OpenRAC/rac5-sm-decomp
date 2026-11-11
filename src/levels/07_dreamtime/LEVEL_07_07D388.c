/* LEVEL_07:0x07D388 -- resets a small global record when the caller asks for
   a full refresh.  The retail reaches the record through the page symbol
   D_00250000 with a negative displacement. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern char D_00250000[];

void func_07D388(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            Rec *p = (Rec *)(D_00250000 - 0x00D0);
            p->f_00 = 0;
            p->f_0C = 1.0f;
            p->f_08 = 0;
            p->f_04 = 0;
        }
    }
}
