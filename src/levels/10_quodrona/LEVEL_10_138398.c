/* LEVEL_10.REL:0x138398 -- submits one sprite through func_01BCA8, choosing
   between the owner's +0xD8 and +0xDC floats on its +0x6C flag. */
typedef struct {
    unsigned char pad0[0x6C];
    int flag_6C;
    unsigned char pad1[0x68];
    float v_D8;
    float v_DC;
} Inner;

typedef struct {
    unsigned char pad0[0x58];
    Inner *p_58;
} Rec;

extern void func_01BCA8(void *a0, void *a1, void *a2, int a3, int a4, int a5,
                        int a6, float f);

void func_138398(Rec *a0, void *a1, void *a2)
{
    Inner *p = a0->p_58;
    float alpha = p->flag_6C ? p->v_DC : p->v_D8;

    func_01BCA8(a1, a2, (unsigned char *)a0 + 0x30, 0x529, 0x101, 2, 1, alpha);
}
