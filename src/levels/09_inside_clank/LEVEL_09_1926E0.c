/* LEVEL_09:0x1926E0 -- placement copy of LEVEL_01_19CEB0.c: submits four marker records at a point just above an object. */
typedef unsigned int u32;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x30];
    Vec3 position;
} RenderInput;

extern float D_00201A78[];
extern void func_0D84D8(int kind, const Vec3 *position, const float *basis, u32 color, u32 alternate_color, float f0, float f1, float f2, float f3, float f4, void *matrix, int mode, int tag);

static inline void Copy(Vec3 *d, const Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_1926E0(const RenderInput *input)
{
    Vec3 position;

    Copy(&position, &input->position);
    position.y = position.y + 0.5f;

    func_0D84D8(3, &position, D_00201A78, 0xffff8080u, 0x00ff8080u, 0.0f, 0.4f, 0.2f, -0.75f, 0.10000001f, 0, 3, 10);
    func_0D84D8(2, &position, D_00201A78, 0xffff8080u, 0x00ff8080u, 0.0f, 0.4f, 0.2f, -0.75f, 0.10000001f, 0, 1, 10);
    func_0D84D8(2, &position, D_00201A78, 0xffff8080u, 0x00ff8080u, 0.0f, 0.4f, 0.2f, -0.75f, 0.10000001f, 0, 1, 10);
    func_0D84D8(1, &position, D_00201A78, 0xffff8080u, 0x00ff8080u, 0.0f, 0.2f, 0.2f, -0.15f, 0.10000001f, 0, 1, 0x30);
}
