typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_11C930(Mat3 *, const Quat *);
void func_11C558(Mat3 *dst, const Quat *source)
{
    func_11C930(dst, source);
}
