typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_11F1B8(Mat3 *, const Quat *);
void func_11EDE0(Mat3 *dst, const Quat *source)
{
    func_11F1B8(dst, source);
}
