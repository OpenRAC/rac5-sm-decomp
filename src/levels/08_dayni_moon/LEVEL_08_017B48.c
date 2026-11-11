typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
    char pad[0x40 - 0x10];
} E;

typedef struct {
    float f0;
    float f4;
    float f8;
} S;

extern E D_0027EBA0[8];

void func_017B48(unsigned int index, S *src)
{
    if (index < 8) {
        E *p = &D_0027EBA0[index];

        p->f0 = src->f0;
        p->f4 = src->f4;
        p->f8 = src->f8;
        p->fC = 1.0f;
    }
}
