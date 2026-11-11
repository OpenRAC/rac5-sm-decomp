/* LEVEL_23.REL:0x0033D0 -- writes two floats through the reloadable global pointer
   D_1C2654. */
typedef struct {
    char pad_00[0x20C];
    float f_20C;
    char pad_210[0x08];
    float f_218;
} Node;

typedef struct {
    Node *p;
} Holder;

extern Holder D_1C2654;

void func_0033D0(float a0, float a1)
{
    D_1C2654.p->f_20C = a0;
    D_1C2654.p->f_218 = a1;
}
