typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef union {
    Sample sample;
    int words[3];
} Slot;

extern Sample D_00220D18;
extern void func_0294E0(int a0, int a1, int a2);

void HIT_fseek__FPii9SEEKPARAM(int a0, int a1, int a2)
{
    Slot s;

    s.sample = D_00220D18;
    func_0294E0(a0 - 1, a1, s.words[a2]);
}
