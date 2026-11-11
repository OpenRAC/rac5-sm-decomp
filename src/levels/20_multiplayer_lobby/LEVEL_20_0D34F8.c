typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef union {
    Sample sample;
    int words[3];
} Slot;

extern Sample D_0012DCD8;
extern void func_023C68(int a0, int a1, int a2);

void func_0D34F8(int a0, int a1, int a2)
{
    Slot s;

    s.sample = D_0012DCD8;
    func_023C68(a0 - 1, a1, s.words[a2]);
}
