typedef struct {
    float f00;
    char pad[0x18];
    float f1C;
    int f20;
} Rec;

extern int rand(void);

void func_10BF80(char *a0, Rec *a1, signed char a2)
{
    float k = 6.2831855f;
    int r;

    a1->f00 = 2.0000398f;
    r = rand();
    a1->f20 = a2;
    a1->f1C = (float)r * 4.656612873077393e-10f * k;
}
