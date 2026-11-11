typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_102DB0(Mat3 *, const Quat *);
void func_1029D8(Mat3 *dst, const Quat *source)
{
    func_102DB0(dst, source);
}
