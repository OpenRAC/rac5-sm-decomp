/* LEVEL_07:0x017998 -- placement copy of LEVEL_08_017B48.c. */
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

extern E D_00245220[8];

void func_017998(unsigned int index, S *src)
{
    if (index < 8) {
        E *p = &D_00245220[index];

        p->f0 = src->f0;
        p->f4 = src->f4;
        p->f8 = src->f8;
        p->fC = 1.0f;
    }
}
