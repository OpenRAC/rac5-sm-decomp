typedef struct {
    float f[4];
    int tag;
} Sample;

typedef union {
    Sample sample;
    int words[5];
} Elem;

extern Elem D_00224E80[1];
extern int func_000390(int a0, int a1);

int func_0003B8(int index)
{
    Elem e = D_00224E80[index];

    return func_000390(e.words[3], e.words[1]);
}
