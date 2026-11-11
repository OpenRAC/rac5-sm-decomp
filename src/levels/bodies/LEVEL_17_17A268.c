/* LEVEL_17:0x17A268 -- placement copy of LEVEL_01_1CDF20.c. */
typedef struct {
    float f[6];
    float h[2];
    int id;
} Payload;

typedef struct {
    Payload p;
    int a;
    float b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
} Dest;

extern Payload D_001C0140;
extern void func_102A60(Dest *a0, int a1);

void func_17A268(Dest *a0, int a1, int a2)
{
    a0->p = D_001C0140;
    func_102A60(a0, a1);
    a0->a = 0;
    a0->b = 1.0f;
    a0->e = 0;
    a0->f = 0;
    a0->g = 0;
    a0->c = 0;
    a0->d = 0;
    if (a2) {
        a0->h = 1;
    } else {
        a0->h = 0;
    }
}
