/* LEVEL_17:0x0F9CA8 -- takes the global record, keeps it in a local and
   hands one of its words to the shared code. */
typedef struct {
    float f[2];
    int i;
} Rec;

typedef union {
    Rec rec;
    int word[3];
} Slot;

extern Rec D_001C00D8;

void func_026AE0(int a, int b, int c);

void func_0F9CA8(int a, int b, int index)
{
    Slot slot;

    slot.rec = D_001C00D8;
    func_026AE0(a - 1, b, slot.word[index]);
}
