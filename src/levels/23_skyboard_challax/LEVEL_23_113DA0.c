typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_1142B0(Mat3 *, const Quat *);
void func_113DA0(Mat3 *dst, const Quat *source)
{
    func_1142B0(dst, source);
}
