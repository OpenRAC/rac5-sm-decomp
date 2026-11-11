/* LEVEL_07:0x035F60 -- stores a position and a flag in the global record. */
struct Vec {
    float x;
    float y;
    float z;
};

struct Global {
    struct Vec pos;
    int flag;
};

extern struct Global D_0024A4A0;

void func_035F60(struct Vec *src, int flag)
{
    D_0024A4A0.pos = *src;
    D_0024A4A0.flag = flag;
}
