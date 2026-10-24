/* LEVEL_24:0x0CB060 -- resets a small global record when the caller asks for
   a full refresh.  The retail reaches the record through the page symbol
   D_00300000 with a negative displacement. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern char D_00300000[];

void func_0CB060(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            Rec *p = (Rec *)(D_00300000 - 0x77B0);
            p->f_00 = 0;
            p->f_0C = 1.0f;
            p->f_08 = 0;
            p->f_04 = 0;
        }
    }
}
