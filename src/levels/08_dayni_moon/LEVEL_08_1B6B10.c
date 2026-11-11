/* LEVEL_08:0x1B6B10 -- builds a float position and forwards it to a math helper with a scaled term. */

extern float D_0026F55C;
extern char *D_0023F19C;
extern char D_00261B08[];

void func_0AD818(void *a);
void func_087AF0(void *a, void *b, int c, float d);

struct Inner {
    char pad0[0x38];
    float f38;
};

struct Ent {
    char pad0[4];
    struct Inner *in;
    char pad8[0x34 - 8];
};

struct Mid {
    char pad0[4];
    struct Ent *ents;
};

void func_1B6B10(char *a0)
{
    float v[3];
    float f0;
    float f1;
    struct Ent *p;
    unsigned char idx;

    f0 = D_0026F55C + 0.05f;
    v[0] = *(float *)(a0 + 0x30);
    v[1] = f0;
    v[2] = *(float *)(a0 + 0x38);
    func_0AD818(D_0023F19C);
    idx = *(unsigned char *)(a0 + 0x44);
    f1 = *(float *)(a0 + 0x70);
    p = (*(struct Mid **)(a0 + 0x40))->ents;
    f0 = 1.0f - f1;
    func_087AF0(v, D_00261B08, 0xA0, f0 * p[idx].in->f38);
}
