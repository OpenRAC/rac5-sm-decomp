/* LEVEL_19.REL:0x003758 -- records the caller's value on the current record. */
typedef struct {
    char pad0[0x154];
    float f_154;
} Rec;

extern Rec *D_0019BE5C;

void func_003758(float x)
{
    D_0019BE5C->f_154 = x;
}
