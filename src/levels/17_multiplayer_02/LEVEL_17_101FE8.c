typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_1023C0(Mat3 *, const Quat *);
void func_101FE8(Mat3 *dst, const Quat *source)
{
    func_1023C0(dst, source);
}
