typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_129788(Mat3 *, const Quat *);
void func_129278(Mat3 *dst, const Quat *source)
{
    func_129788(dst, source);
}
