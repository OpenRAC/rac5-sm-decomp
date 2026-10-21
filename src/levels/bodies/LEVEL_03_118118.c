typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef union {
    Sample sample;
    int words[3];
} Slot;

extern Sample D_00230C98;
extern void func_029500(int a0, int a1, int a2);

void func_118118(int a0, int a1, int a2)
{
    Slot s;

    s.sample = D_00230C98;
    func_029500(a0 - 1, a1, s.words[a2]);
}
