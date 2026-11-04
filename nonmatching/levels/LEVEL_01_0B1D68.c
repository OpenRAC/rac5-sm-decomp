/* Candidate LEVEL_01.REL:0x0B1D68. Draws two animated UI panels. */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u16 x; u16 pad_x;
    u16 y; u16 pad_y;
    u16 z; u16 pad_z;
    u16 w; u16 pad_w;
} RectCoords;

extern int D_001FC1D0;
extern int D_001FC1B8;
extern int D_001FC1BC;
extern float D_001FC1C0, D_001FC1C4, D_001FC1C8, D_001FC1CC;
extern float D_001FC25C, D_001FC260;
extern u8 D_001FC258;
extern char D_001FC1D8[];

extern int func_0AE708(int id, void *out, float zero);
extern void func_0AC4B0(short, short, short, short, u32);
extern int func_0A86E0(RectCoords *);
extern void func_0A8CA0(u32);
extern void func_0A98C0(short, short, int);
extern int func_1324B0(int);

void func_0B1D68(void)
{
    RectCoords rect;
    float delta_x, low_x, high_x;
    float delta_y, low_y, high_y;
    float *clamp;
    int phase;
    u32 color, packed;

    if (D_001FC1D0 == 0)
        return;

    func_0AE708(0x31, &rect, 0.0f);
    func_0AC4B0((short)(rect.x - 1), (short)(rect.y - 1),
                  (short)(rect.z + 1), (short)(rect.w + 1),
                  (u32)*(u8 *)&D_001FC1D0 << 24);

    packed = ((u32)D_001FC1D0 << 24) | 0x00ffffff;
    color = (((((packed >> 24) + 1) >> 1) << 24) | (((((packed >> 16) & 0xff) + 1) * 9 >> 8) << 16)) | ((((((packed >> 8) & 0xff) + 1) * 0xa5 >> 8) << 8) | (((packed & 0xff) + 1) * 0xd0 >> 8));
    func_0AC4B0((short)rect.x, (short)rect.y, (short)rect.z,
                  (short)rect.w, color);

    phase = func_0A86E0(&rect);
    low_x = -10.0f;
    high_x = 10.0f;
    delta_x = (float)(phase - 4) * (D_001FC1C4 / D_001FC1C0) - D_001FC25C;
    clamp = &low_x;
    if (delta_x >= -10.0f) {
        clamp = &high_x;
        if (delta_x <= 10.0f)
            clamp = &delta_x;
    }
    D_001FC25C += *clamp;

    color = ((u32)D_001FC1D0 << 24) | 0x00ffffff;
    color = (((((color >> 24) + 1) * 0xff >> 8) << 24)) |
            (((((color >> 16) & 0xff) + 1) * 9 >> 8) << 16) |
            (((((color >> 8) & 0xff) + 1) * 0xa5 >> 8) << 8) |
            (((color & 0xff) + 1) * 0xd0 >> 8);
    func_0AC4B0((short)(rect.x + 2), (short)(rect.y + 2),
                  (short)(rect.x + (int)D_001FC25C + 2),
                  (short)(rect.w - 2), color);

    if (D_001FC1B8 != 0) {
        phase = func_0A86E0(&rect);
        low_y = -10.0f;
        high_y = 10.0f;
        delta_y = (float)phase * (D_001FC1CC / D_001FC1C8) - D_001FC260;
        clamp = &low_y;
        if (delta_y >= -10.0f) {
            clamp = &high_y;
            if (delta_y <= 10.0f)
                clamp = &delta_y;
        }
        D_001FC260 += *clamp;
        func_0AE708(0x31, &rect, 0.0f);
        color = ((u32)D_001FC1D0 << 24) | 0x00ffffff;
        color = (((((color >> 24) + 1) >> 2) << 24)) |
                (((((color >> 16) & 0xff) + 1) * 0xff >> 8) << 8);
        func_0AC4B0((short)rect.x, (short)rect.y,
                      (short)((float)(int)rect.x + D_001FC260),
                      (short)rect.w, color);
    }

    func_0AE708(0x32, &rect, 0.0f);
    func_0A8CA0(((u32)D_001FC1D0 << 24) | 0x00ffffff);
    if (D_001FC258)
        func_0A98C0((short)rect.x, (short)rect.w, (int)D_001FC1D8);
    else
        func_0A98C0((short)rect.x, (short)rect.w,
                      func_1324B0(D_001FC1BC));
}
