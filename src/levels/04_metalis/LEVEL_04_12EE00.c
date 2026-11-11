typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_12F310(Mat3 *, const Quat *);
void func_12EE00(Mat3 *dst, const Quat *source)
{
    func_12F310(dst, source);
}
