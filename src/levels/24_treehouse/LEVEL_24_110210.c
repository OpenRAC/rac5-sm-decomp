typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef union {
    Sample sample;
    int words[3];
} Slot;

extern Sample D_001E8B18;
extern void func_026C48(int a0, int a1, int a2);

void func_110210(int a0, int a1, int a2)
{
    Slot s;

    s.sample = D_001E8B18;
    func_026C48(a0 - 1, a1, s.words[a2]);
}
