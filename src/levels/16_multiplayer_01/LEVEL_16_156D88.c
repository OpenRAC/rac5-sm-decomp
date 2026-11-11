/* LEVEL_16:0x156D88 -- calls a helper with two symbol addresses and stores its byte result. */
struct Ctl17 {
    char pad0[0x6C];
    unsigned char b6C;
};

struct Obj17 {
    char pad0[0x54];
    int *p54;
    struct Ctl17 *p58;
};

extern char D_00154A50[];
extern char D_00157580[];
unsigned char func_14AF78(int a0, struct Obj17 *a1, int *a2, char *a3, char *t0, float f12, float f13);

void func_156D88(struct Obj17 *a0)
{
    struct Ctl17 *s0;

    s0 = a0->p58;
    s0->b6C = func_14AF78(a0->p54[0], a0, a0->p54 + 1, D_00154A50, D_00157580, 0.5f, 1.0f);
}
