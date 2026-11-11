/* LEVEL_22:0x02BC28 -- un echantillon recopie dans un global,
   puis un entier ecrit juste apres. */
typedef struct {
    float f[2];
    int   n;
} Sample;

typedef struct {
    Sample s;
    int    m;
} Record;

extern Record D_001867A0;

void func_02BC28(Sample *src, int value)
{
    D_001867A0.s = *src;
    D_001867A0.m = value;
}
