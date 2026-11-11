/* LEVEL_19.REL:0x007768 -- variant b: the bias rides on the index. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x18];
} Slot;

typedef struct {
    char pad_00[0x1CB0];
    int i_1CB0;
    int i_1CB4;
} Base;

typedef struct {
    Base *p;
} Holder;

extern Holder D_19BE5C;

void func_007768(float a0)
{
    Base *b = D_19BE5C.p;
    int i = b->i_1CB0;
    int end = i + b->i_1CB4;

    if (i < end) {
        do {
            Slot *s = (Slot *)((char *)D_19BE5C.p
                               + ((i & 0x7F) * 0x30 + 0x4B0));
            s->f_14 += a0;
            i++;
        } while (i < end);
    }
}
