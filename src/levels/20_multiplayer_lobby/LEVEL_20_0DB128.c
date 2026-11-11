typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_0DB500(Mat3 *, const Quat *);
void func_0DB128(Mat3 *dst, const Quat *source)
{
    func_0DB500(dst, source);
}
