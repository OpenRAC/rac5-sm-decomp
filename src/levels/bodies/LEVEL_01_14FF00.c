/* LEVEL_01:0x14FF00 -- initialises a three-field record: a colour word, a
   float value and a zero word. */
typedef struct {
    int f_00;
    float f_04;
    int f_08;
} Rec;

void func_14FF00(Rec *p)
{
    p->f_00 = (int)0xFF7FCCFF;
    p->f_04 = 12.000001f;
    p->f_08 = 0;
}
