typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_126870(Mat3 *, const Quat *);
void func_126360(Mat3 *dst, const Quat *source)
{
    func_126870(dst, source);
}
