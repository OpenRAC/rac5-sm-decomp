/* LEVEL_24:0x075B20 -- copies the caller's vector into the payload the
   level keeps on the stack and hands it to the shared update routine
   (0x075B58), together with the caller's float. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 v;
    float w;
} Payload;

extern void func_075B58(Payload *p);

void func_075B20(Vec3 *src, float t)
{
    Payload p;

    p.v = *src;
    p.w = t;
    func_075B58(&p);
}
