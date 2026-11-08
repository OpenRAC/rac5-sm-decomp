/* Adapted from the accepted LEVEL_01_06BDE8.c body. */
typedef struct {
    char pad[0x1BC];
    int a1BC;
    int a1C0;
    int a1C4;
    int a1C8;
    int a1CC;
    int a1D0;
    char pad2[0x24];
    float f1F8;
    float f1FC;
    char b200;
    char pad3[3];
    char b204;
    char b205;
    char b206;
    char b207;
    char b208;
} Rec;

extern int rand(void);

void func_071268(Rec *p)
{
    float k;
    int v;

    k = 0x1p-31f;
    p->b207 = 0;
    p->b208 = 0;
    p->b205 = 0;
    p->b206 = 0;
    p->b204 = 11;
    v = rand();
    p->f1F8 = (float)v * k;
    v = rand();
    p->f1FC = (float)v * k;
    p->b200 = 0;
    {
        int *q = (int *)((char *)p + 0x1C8);
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
    }
    {
        int *r = (int *)((char *)p + 0x1BC);
        r[0] = 0;
        r[1] = 0;
        r[2] = 0;
    }
}
