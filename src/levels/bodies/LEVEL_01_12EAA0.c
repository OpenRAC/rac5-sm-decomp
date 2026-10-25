typedef struct {
    float f00;
    char pad[0x18];
    float f1C;
    int f20;
} Rec;

int func_000000(char *a0, Rec *a1);

void func_12EAA0(char *a0, Rec *a1, signed char a2)
{
    float k = 6.2831855f;
    int r;

    a1->f00 = 2.0000398f;
    r = func_000000(a0, a1);
    a1->f20 = a2;
    a1->f1C = (float)r * 4.656612873077393e-10f * k;
}
