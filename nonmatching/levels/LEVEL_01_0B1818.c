/* Candidate LEVEL_01.REL:0x0B1818. Animated UI panel. */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u16 x; u16 pad_x;
    u16 y; u16 pad_y;
    u16 z; u16 pad_z;
    u16 w; u16 pad_w;
} RectCoords;

extern int D_001FC1A0;
extern float D_001FC198, D_001FC19C, D_001FC1A4;
extern u8 D_001FC1AC, D_001FC1AD;

extern int func_0AE708(int id, void *out, float zero);
extern void func_0AC4B0(short, short, short, short, u32);
extern int func_0A86E0(RectCoords *);
extern int func_1EB278(float);
extern void func_0A8CA0(u32);

void func_0B1818(void)
{
    RectCoords rect;
    u32 color, packed, target;
    float ratio, progress;
    int width, right;
    int ca, cr, cg, cb;
    short left;

    if (D_001FC1A0 == 0)
        return;

    func_0AE708(0x2f, &rect, 0.0f);
    func_0AC4B0((short)(rect.x - 1), (short)(rect.y - 1),
                  (short)(rect.z + 1), (short)(rect.w + 1),
                  (u32)*(u8 *)&D_001FC1A0 << 24);

    if (D_001FC198 == D_001FC19C) {
        if (D_001FC1AD < 13) {
            packed = ((u32)D_001FC1A0 << 24) | 0x00ffffff;
            color = ((((packed >> 24) + 1) >> 1) << 24) |
                    (((((packed >> 16) & 0xff) + 1) * 9 >> 8) << 16) |
                    (((((packed >> 8) & 0xff) + 1) * 0xa5 >> 8) << 8) |
                    (((packed & 0xff) + 1) * 0xd0 >> 8);
        } else {
            packed = ((u32)D_001FC1A0 << 24) | 0x00ffffff;
            color = (((((packed >> 24) + 1) * 0xb0 >> 8) << 24)) |
                    (((((packed >> 16) & 0xff) + 1) * 0xae >> 8) << 16) |
                    (((((packed >> 8) & 0xff) + 1) * 0xe4 >> 8) << 8) |
                    (((packed & 0xff) + 1) * 0xff >> 8);
        }
        func_0AC4B0((short)rect.x, (short)rect.y, (short)rect.z,
                      (short)rect.w, color);
    } else {
        packed = ((u32)D_001FC1A0 << 24) | 0x00ffffff;
        color = ((((packed >> 24) + 1) >> 1) << 24) |
                (((((packed >> 16) & 0xff) + 1) * 9 >> 8) << 16) |
                (((((packed >> 8) & 0xff) + 1) * 0xa5 >> 8) << 8) |
                (((packed & 0xff) + 1) * 0xd0 >> 8);
        func_0AC4B0((short)rect.x, (short)rect.y, (short)rect.z,
                      (short)rect.w, color);
    }

    width = func_0A86E0(&rect);
    progress = D_001FC1A4;
    ratio = D_001FC19C / D_001FC198;
    right = rect.x + (int)((float)(width - 4) * ratio) + 2;
    left = (short)(rect.x + 2);
    target = 0xff0370ff;
    if (D_001FC1AC)
        target = 0xffff7003;
    ca = func_1EB278(progress * (float)(int)((target >> 24) - 255) + 255.0f);
    cr = func_1EB278(progress * (float)(int)(((target >> 16) & 0xff) - 9) + 9.0f);
    cg = func_1EB278(progress * (float)(int)(((target >> 8) & 0xff) - 0xa5) + 165.0f);
    cb = func_1EB278(progress * (float)(int)((target & 0xff) - 0xd0) + 208.0f);
    color = (u32)ca << 24 | (u32)cr << 16 | (u32)cg << 8 | (u32)cb;
    func_0AC4B0(left, (short)(rect.y + 2), (short)right,
                  (short)(rect.w - 2), color);
    func_0A8CA0(((u32)*(u8 *)&D_001FC1A0 << 24) | 0x00ffffff);
}
