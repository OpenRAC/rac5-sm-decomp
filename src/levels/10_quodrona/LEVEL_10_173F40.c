/* LEVEL_10:0x173F40 -- sets up an effect by running a fixed sequence of setup calls on a local record. */
typedef struct Rec {
    char pad[0x10];
    char a[0x10];
    char b[0x10];
} Rec;

extern char D_0022A448[];

extern void func_123D68(void *dst, Rec *r, void *d);
extern void func_002F20(void *dst, int flag, float f);
extern void func_003130(void *p);
extern void func_003280(void *p, int flag);
extern void func_003498(float x, float y, int a, int b);
extern void func_0034C8(float x, float y, int a, int b);
extern void func_0035E8(float x, float y, int a, int b);
extern void func_003638(float x, float y, int a, int b);
extern void func_003840(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7,
                        float s0, float s1, float s2, float s3, float s4, float s5, float s6, float s7,
                        float s8, float s9, float s10);

void func_173F40(Rec *r, int flag)
{
    char tmp[0x10];
    int n;

    func_123D68(tmp, r, D_0022A448);
    n = 2;
    func_002F20(tmp, flag, 0.0f);
    func_003130(&r->b);
    func_003280(&r->a, flag);
    if (flag)
        n = 3;
    func_003498(15.0f, 1.0f, 100, n);
    func_0034C8(8.0f, 1.0f, 100, n);
    func_0035E8(0.0f, 1.0f, 100, n);
    func_003638(0.0f, 1.0f, 100, n);
    func_003840(0.3f, 0.7f, 0.4f, 0.2f, -0.7f, 0.7f, 0.2f, 0.686f,
                4.0f, 3.0f, 0.40000004f, 0.7f, 0.0f, 0.0f, 1.0f, 0.2f,
                1.2f, 0.1f, 1.0f);
}
