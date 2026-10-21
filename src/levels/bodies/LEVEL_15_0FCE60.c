/* LEVEL_15:0x0FCE60 -- resets four fields of the caller's record and hands
   back a pointer to the field that follows them. */
typedef struct {
    int f_00;
    float f_04;
    int f_08;
    int f_0C;
    char pad[0xF8];
    int f_108;
    int f_10C;
} Rec;

int *func_0FCE60(Rec *a0, int a1)
{
    a0->f_10C = 1;
    a0->f_00 = a1;
    a0->f_04 = 1.0f;
    a0->f_108 = 0;
    a0->f_08 = 0;
    return &a0->f_0C;
}
