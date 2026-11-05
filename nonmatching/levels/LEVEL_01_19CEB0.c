/* Candidate: submit four colored render records for one position. */
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

extern float D_00217E78[];
extern void func_0DB228(int kind, const Vec3 *position, const float *basis,
                        u32 color, u32 alternate_color, void *matrix,
                        int mode, int tag,
                        float f0, float f1, float f2, float f3, float f4);

void func_19CEB0(const RenderInput *input)
{
    Vec3 position;

    position.x = input->position.x;
    position.y = input->position.y + 0.5f;
    position.z = input->position.z;

    func_0DB228(3, &position, D_00217E78, 0xffff8080u,
                0x00ff8080u, 0, 3, 10,
                0.0f, 0.4f, 0.2f, -0.75f, 0.10000001f);
    func_0DB228(2, &position, D_00217E78, 0xffff8080u,
                0x00ff8080u, 0, 1, 10,
                0.0f, 0.4f, 0.2f, -0.75f, 0.10000001f);
    func_0DB228(2, &position, D_00217E78, 0xffff8080u,
                0x00ff8080u, 0, 1, 10,
                0.0f, 0.4f, 0.2f, -0.75f, 0.10000001f);
    func_0DB228(1, &position, D_00217E78, 0xffff8080u,
                0x00ff8080u, 0, 1, 0x30,
                0.0f, 0.2f, 0.2f, -0.15f, 0.10000001f);
}
