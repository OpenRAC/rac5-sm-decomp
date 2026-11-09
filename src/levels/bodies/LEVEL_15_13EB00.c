/* LEVEL_15:0x13EB00 -- forwards its arguments to two helpers, one of them on a sub-object. */
typedef struct {
    float x, y, z;
} V;

extern void func_0EABF0(float *a0, float *a1, float *a2);
extern void func_13EA10(char *a0, char *a1, int a2, V *a3);

void func_13EB00(char *a0, char *a1, float *a2, float *a3, V *a4)
{
    func_0EABF0((float *)(a0 + 0x30), a2, a3);
    func_13EA10(a0, a1, (int)a3, a4);
}
