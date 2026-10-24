/* LEVEL_19:0x181358 -- builds the sample buffer, hands it to the two
   helpers and returns the sub record at 0x70. */
typedef struct {
    char pad0[0x2C];
    float f2C;
} Ctx;

typedef struct Obj Obj;

extern void func_1066B8(float *, int, int, float, float, float);
extern void func_02FAD8(Obj *, float *, float *);

char *func_181358(Obj *a0, int a1, int a2, Ctx *a3, int a4)
{
    float buf[12];
    float v = a3->f2C;

    func_1066B8(buf, 0, a4, v, v, v);
    func_02FAD8(a0, buf, buf + 9);
    return (char *)a0 + 0x70;
}
