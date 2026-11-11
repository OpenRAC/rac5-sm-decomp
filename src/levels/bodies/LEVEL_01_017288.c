/* LEVEL_01:0x017288 -- placement copy of LEVEL_08_017B48.c. */
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

extern E D_0022F920[8];

void func_017288(unsigned int index, S *src)
{
    if (index < 8) {
        E *p = &D_0022F920[index];

        p->f0 = src->f0;
        p->f4 = src->f4;
        p->f8 = src->f8;
        p->fC = 1.0f;
    }
}
