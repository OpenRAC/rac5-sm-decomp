/* LEVEL_18.REL:159D50 -- arms the record at 0x58: raises the byte at 0x18B,
   clears 0x178 and removes 150 from the timer at 0x168. */
typedef struct {
    char pad_00[0x168];
    float f_168;
    char pad_16C[0xC];
    int f_178;
    char pad_17C[0xF];
    unsigned char b_18B;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *f_58;
} Obj;

void func_159D50(Obj *a0)
{
    Rec *r = a0->f_58;

    r->b_18B = 1;
    r->f_168 = r->f_168 - 150.0f;
    r->f_178 = 0;
}
