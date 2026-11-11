/* LEVEL_10:0x194888 -- re-arms the object: clears the state byte, resets the
   sub-record, releases the loaded stream and the two arrays. */
typedef struct {
    char pad_00[0x04];
    int f_04;
    char pad_08[0x04];
    float f_0C;
    char pad_10[0x3D];
    unsigned char f_4D;
    char pad_4E[0x13A];
    void *f_188;
    char pad_18C[0xF44];
} Sub;

typedef struct {
    char pad_00[0x45];
    unsigned char f_45;
    char pad_46[0x12];
    Sub *f_58;
} Obj;

extern void func_07D358(Obj *o, int a, int b, int c, float f, float g);
extern void func_081168(void *p);
extern void func_108F08(void *p);

void func_194888(Obj *a0)
{
    Sub *s = a0->f_58;

    s->f_0C = 0.0f;
    a0->f_45 = 0;
    s->f_04 = 0;
    func_07D358(a0, 0, 0, 1, 0.1f, 0.0f);
    if (s->f_188 != 0)
        func_081168(s->f_188);
    if (s->f_4D != 0) {
        func_108F08((char *)s + 0xD0);
        func_108F08((char *)s + 0x12C);
        s->f_4D = 0;
    }
}
