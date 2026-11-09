/* LEVEL_15:0x132450 -- stores a helper result into the fixed state record using a count-scaled size argument. */

struct State {
    unsigned char pad0[0xF4];
    int result;
    int count;
};

extern struct State D_002F3D20;
extern unsigned char D_00171590[];

int func_0D4F30(int a, int b, int c, unsigned char *d, int e);

void func_132450(void)
{
    struct State *s;

    s = &D_002F3D20;
    s->result = func_0D4F30(16, s->count * 12, 0, D_00171590, 0x2B0);
}
