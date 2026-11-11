/* LEVEL_15:0x113A58 -- resets the object's scale to 1 and transforms the owner's offset vector into the object's position with the shared matrix. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern float D_002F3D68[];
extern void func_0EA938(V3 *out, float *m, V3 *v);

void func_113A58(char *obj)
{
    *(float *)(obj + 0x78) = 1.0f;
    func_0EA938((V3 *)(obj + 0x6C), D_002F3D68, (V3 *)(*(char **)(obj + 0x254) + 0xAC));
}
