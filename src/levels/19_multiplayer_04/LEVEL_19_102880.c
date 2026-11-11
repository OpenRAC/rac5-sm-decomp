typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_102C58(Mat3 *, const Quat *);
void func_102880(Mat3 *dst, const Quat *source)
{
    func_102C58(dst, source);
}
