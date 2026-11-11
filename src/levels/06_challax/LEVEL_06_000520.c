typedef struct {
    float f[4];
    int tag;
} Sample;

typedef union {
    Sample sample;
    int words[5];
} Elem;

extern Elem D_001FA380[1];
extern void func_0004F8(int a0, int a1);

void func_000520(int a0)
{
    Elem e = D_001FA380[a0];

    func_0004F8(e.words[3], e.words[1]);
}
