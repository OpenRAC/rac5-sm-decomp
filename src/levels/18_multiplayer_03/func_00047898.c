struct vec3 { float x, y, z; };

struct state {
    char pad0[0x102];
    short flag_102;
    char pad1[0x210 - 0x104];
    struct vec3 pos;
    char pad2[0x240 - 0x21C];
    int field_240;
    char pad3[0x26C - 0x244];
    float field_26c;
    char pad4[0x36C - 0x270];
    int mode;
    char pad5[0x59C - 0x370];
    void *handle;
    char pad6[0x974 - 0x5A0];
    struct vec3 src;
    char pad7[0x988 - 0x980];
    int counter;
};

extern void func_03C2B0(struct state *s, int mode);
extern float func_06F1F0(void *handle);
extern int func_06F218(void *handle, int mode);
extern void func_042C60(struct state *s);
extern void func_047C30(struct state *s, int a1, int a2, int a3,
                        float f12, float f13);

void func_00047898(struct state *s) {
    float *dst;
    float *src;

    func_03C2B0(s, 1);

    if (s->mode == 0x52) {
        func_06F1F0(s->handle);
        dst = &s->pos.x;
        src = &s->src.x;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        s->field_240 = 0;
        s->field_26c = 1.0f;
        func_042C60(s);
        if (func_06F218(s->handle, 0) == 0) {
            return;
        }
        s->counter = 30;
        func_047C30(s, 0x53, 0, 1, 0.15f, 0.0f);
        return;
    }

    if (s->mode == 0x53) {
        if (--s->counter != 0) {
            return;
        }
        func_047C30(s, 0x54, 0, 1, 0.15f, 0.0f);
        return;
    }

    if (func_06F218(s->handle, 0) != 0) {
        s->flag_102 = 0;
    }
}
