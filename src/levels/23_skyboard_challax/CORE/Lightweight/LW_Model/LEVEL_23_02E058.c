/* LEVEL_23:0x02E058 -- same shape as LEVEL_18:0x02F2C8. */
typedef struct {
    int i0;
    int i4;
    unsigned char pad[0x80 - 8];
    float f80;
} Rec;

extern void func_02DDA8(void *a, void *b, void *c);

void func_02E058(Rec *a0, void *a1, void *a2, void *a3, int a4, int a5,
                 float a6)
{
    a0->i4 = a4;
    a0->f80 = a6;
    a0->i0 = a5;
    func_02DDA8((char *)a0 + 0x10, a2, a3);
}

int func_02E090(int *a0, int *a1)
{
    return *a0 - *a1;
}
