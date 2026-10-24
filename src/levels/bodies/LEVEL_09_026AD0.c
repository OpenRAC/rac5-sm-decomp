/* LEVEL_09.REL:0x026AD0 -- refreshes the fading counter and forwards the
   scaled level value. */
typedef struct {
    char pad_00[0x1C];
    int i_1C;
    char pad_20[0x28];
    int i_48;
} Node;

extern Node *D_1DDDAC;
extern int D_1DDDB4;
extern void func_000000(float);

void func_026AD0(float a0)
{
    Node *n = D_1DDDAC;

    if (n->i_48 < 0)
        n->i_48 = n->i_1C;
    func_000000((float)D_1DDDAC->i_1C / 255.0f * a0);
    D_1DDDB4 = 5;
}
