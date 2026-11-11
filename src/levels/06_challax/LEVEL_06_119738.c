typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_119B10(Mat3 *, const Quat *);
void func_119738(Mat3 *dst, const Quat *source)
{
    func_119B10(dst, source);
}
