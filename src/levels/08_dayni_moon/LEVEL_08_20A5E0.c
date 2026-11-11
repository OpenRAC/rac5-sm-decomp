/* LEVEL_08:0x20A5E0 -- the level's default transform is copied into the
   caller's record, the record is handed to the animator and the flags are
   cleared (or set, when the level asks for the animated variant). */
typedef struct {
    float f[8];
    int kind;
} Base;

typedef struct {
    Base base;
    int a;
    float scale;
    int b;
    int c;
    int d;
    int e;
    int f2;
    int g;
} Dest;

extern Base D_00261A80;

extern void func_134E20(Dest *dst, int mode);

void func_20A5E0(Dest *dst, int mode, int flag)
{
    dst->base = D_00261A80;

    func_134E20(dst, mode);

    dst->a = 0;
    dst->scale = 1.0f;
    dst->d = 0;
    dst->e = 0;
    dst->f2 = 0;
    dst->b = 0;
    dst->c = 0;

    if (flag) {
        dst->g = 1;
    } else {
        dst->g = 0;
    }
}
