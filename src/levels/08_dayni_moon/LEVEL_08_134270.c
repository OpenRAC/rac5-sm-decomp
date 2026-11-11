typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_134780(Mat3 *, const Quat *);
void func_134270(Mat3 *dst, const Quat *source)
{
    func_134780(dst, source);
}
