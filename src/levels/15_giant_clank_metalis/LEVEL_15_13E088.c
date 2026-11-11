/* LEVEL_15.REL:0x13E088 -- resets the two slots, then normalises the counter. */
typedef struct {
    char pad_00[0x58];
    float f_58;
    float f_5C;
    char pad_60[4];
    float f_64;
} Rec;

extern void func_13DFE0(void *);

void func_13E088(Rec *a0)
{
    char *p = (char *)a0;
    char *end = (char *)a0 + 0x58;

    do {
        func_13DFE0(p);
        p += 0x2C;
    } while (p < end);

    a0->f_64 = (a0->f_5C - a0->f_58) * 4.65661287307739e-10f;
}
