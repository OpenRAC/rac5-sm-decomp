/* LEVEL_01:0x088F68 -- initialises the caller's record: a float set to one,
   a word set to -1, five zeroed words and a cleared byte. */
typedef struct {
    int pad_00;
    int pad_04;
    float f_08;
    int f_0C;
    int f_10;
    int f_14;
    int f_18;
    int f_1C;
    int pad_20;
    int pad_24;
    int pad_28;
    char f_2C;
    int f_30;
} Rec;

void func_088F68(Rec *a0)
{
    a0->f_08 = 1.0f;
    a0->f_10 = -1;
    a0->f_14 = 0;
    a0->f_18 = 0;
    a0->f_1C = 0;
    a0->f_30 = 0;
    a0->f_0C = 0;
    a0->f_2C = 0;
}
