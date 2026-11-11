typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
extern void func_1234A8(Mat3 *, const Quat *);
void func_122F30(Mat3 *dst, const Quat *source)
{
    func_1234A8(dst, source);
}
