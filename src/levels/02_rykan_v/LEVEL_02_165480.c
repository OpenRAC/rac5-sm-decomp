/* LEVEL_02.REL:0x165480 -- forwards the record's +0x70 float to func_127300
   between the two 0xFF00xxxx tags and stores the result at +0x6C. */
typedef struct {
    unsigned char pad0[0x6C];
    int r_6C;
    float v_70;
} Rec;

extern int func_127300(unsigned int tag, unsigned int mask, float value);

void func_165480(Rec *a0)
{
    a0->r_6C = func_127300(0xFF000055, 0xFF00CC00, a0->v_70);
}
