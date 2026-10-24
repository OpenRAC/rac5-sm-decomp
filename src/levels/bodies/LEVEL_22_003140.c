/* LEVEL_22.REL:0x003140 -- writes two floats through the reloadable global pointer
   D_14E5D4. */
typedef struct {
    char pad_00[0x20C];
    float f_20C;
    char pad_210[0x08];
    float f_218;
} Node;

typedef struct {
    Node *p;
} Holder;

extern Holder D_14E5D4;

void func_003140(float a0, float a1)
{
    D_14E5D4.p->f_20C = a0;
    D_14E5D4.p->f_218 = a1;
}
