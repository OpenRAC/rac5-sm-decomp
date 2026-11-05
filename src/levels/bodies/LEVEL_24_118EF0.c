typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_119400(Mat3 *, const Quat *);
void func_118EF0(Mat3 *dst, const Quat *source)
{
    func_119400(dst, source);
}
