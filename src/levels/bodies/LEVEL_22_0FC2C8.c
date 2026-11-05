typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_0FC6A0(Mat3 *, const Quat *);
void func_0FC2C8(Mat3 *dst, const Quat *source)
{
    func_0FC6A0(dst, source);
}
