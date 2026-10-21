typedef struct {
    float f[4];
    int tag;
} Sample;

typedef union {
    Sample sample;
    int words[5];
} Elem;

extern Elem D_00168980[1];
extern void func_000390(int a0, int a1);

void func_0003B8(int a0)
{
    Elem e = D_00168980[a0];

    func_000390(e.words[3], e.words[1]);
}
