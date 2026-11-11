/* LEVEL_06:0x139198 -- resets a small global record when the caller asks for
   a full refresh.  The retail reaches the record through the page symbol
   D_00380000 with a negative displacement. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern char D_00380000[];

void func_139198(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            Rec *p = (Rec *)(D_00380000 - 0x1998);
            p->f_00 = 0;
            p->f_0C = 1.0f;
            p->f_08 = 0;
            p->f_04 = 0;
        }
    }
}
