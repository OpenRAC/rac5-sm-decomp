/* LEVEL_09.REL:0x10A120 -- hands the caller's record and the value of its
   slot to the sampler, with an optional output buffer. */
typedef struct {
    char pad0[0x8];
    int f_8;
} Hdr;

extern Hdr *D_001F08A8;

void func_10A160(int a0, int a1, int a2, int a3, float f);

void func_10A120(int a0, int a1, int a2)
{
    int buf;

    func_10A160(a2 ? a2 : (int)&buf, a0, D_001F08A8->f_8, a1,
                *(float *)(a1 + 0xC));
}
