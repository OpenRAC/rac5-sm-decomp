typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef union {
    Sample sample;
    int words[3];
} Slot;

extern Sample D_001096D0;
extern void func_002660(int a0, int a1, int a2);

void HIT_fseek__FPii9SEEKPARAM(int a0, int a1, int a2)
{
    Slot s;

    s.sample = D_001096D0;
    func_002660(a0 - 1, a1, s.words[a2]);
}
