/* LEVEL_01:0x12C720 -- initialises a four-field record: a colour word, a
   float intensity and two zero words. */
typedef struct {
    int f_00;
    int f_04;
    float f_08;
    int f_0C;
} Rec;

void func_12C720(Rec *p)
{
    p->f_04 = (int)0xFF7FCCFF;
    p->f_08 = 5.0f;
    p->f_0C = 0;
    p->f_00 = 0;
}
