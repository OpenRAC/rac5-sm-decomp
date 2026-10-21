/* LEVEL_04:0x07E8A0 -- copies the caller's vector into the payload the
   level keeps on the stack and hands it to the shared update routine
   (0x07E8D8), together with the caller's float. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 v;
    float w;
} Payload;

extern void func_07E8D8(Payload *p);

void func_07E8A0(Vec3 *src, float t)
{
    Payload p;

    p.v = *src;
    p.w = t;
    func_07E8D8(&p);
}
