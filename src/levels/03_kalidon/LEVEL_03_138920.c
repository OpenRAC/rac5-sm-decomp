/* LEVEL_03:0x138920 -- picks one of two floats from the sub-record and
   hands it to func_01C390 with the caller's two words and the buffer at
   +0x30. */
typedef struct {
    char pad_00[0x6C];
    int f_6C;
    char pad_70[0x68];
    float f_D8;
    float f_DC;
} Sub;

typedef struct {
    char pad_00[0x30];
    char buf[0x10];
    char pad_40[0x18];
    Sub *sub;
} Obj;

extern void func_01C390(void *a, void *b, void *c, int d, int e, int f, int g,
                        float h);

void func_138920(Obj *a0, void *a1, void *a2)
{
    Sub *s = a0->sub;
    float f;

    if (s->f_6C)
        f = s->f_DC;
    else
        f = s->f_D8;
    func_01C390(a1, a2, a0->buf, 0x529, 0x101, 2, 1, f);
}
