/* Provisional progress-panel drawing shared across level modules. */
typedef unsigned int u32;

typedef struct {
    short x;
    short pad_02;
    unsigned short y;
    short pad_06;
    unsigned short right;
    short pad_0a;
    unsigned short bottom;
    short pad_0e;
} UiRect;

typedef struct {
    char unused[0x970];
    float progress;
} UiManager;

typedef struct {
    char unused[0x18];
    u32 field_18;
} PanelInput;

extern float D_001E6600[];
extern float D_001E65F8[];
extern int D_001E65C8[];
extern char D_001FBD68[];
extern char D_001FBD58[];
extern UiManager D_0021C8C0;

extern void *func_0B2118(int kind);
extern void func_0A6130(int index, void *value);
extern void func_0ABD58(int id, u32 color, float zero);
extern int func_0AB9B8(int id, void *out, float zero);
extern void func_0AC6B0(int id, int a, int b, int c, u32 field,
                        float x, float y, float z, float w);
extern void func_0A9760(int x, int y, int right, int bottom, u32 color);
extern float ceilf(float value);
extern int func_0A5990(const void *rect);
extern void func_0A97F0(float xscale, float yscale,
                        int x, int y, int right, int bottom,
                        u32 c0, u32 c1, u32 c2, u32 c3, float zero);
extern void func_0A5F50(u32 value);
extern int sprintf(char *dst, const char *format, ...);
extern int func_0A5930(const void *rect);
extern void func_0A7CF8(int x, int bottom, char *text, float sx, float sy);
extern void func_0A7A40(int x, int bottom, char *text);
extern void func_0A8150(int x, int bottom, char *text);

void func_0B5848(int index, const PanelInput *input)
{
    UiRect rect;
    char text[64];
    UiManager *manager;
    float initial_zero = 0.0f;
    float one;
    float draw_zero;
    int current;
    int total;
    int filled;
    float ratio;

    func_0A6130(index, func_0B2118(2));
    func_0ABD58(0x0d, 0xffffffffu, initial_zero);
    func_0ABD58(0x0e, 0xffffffffu, initial_zero);
    func_0AB9B8(0x44, &rect, initial_zero);
    func_0AC6B0(0x44, 0, 0, 0, input->field_18,
                 1.0f, 1.0f, initial_zero, initial_zero);

    func_0A9760((short)((unsigned short)rect.x - 1),
                 (short)(rect.y - 2),
                 (short)(rect.right + 1),
                 (short)(rect.bottom + 1), 0xa0202020u);
    func_0A9760(rect.x, (short)rect.y, (short)rect.right,
                 (short)rect.bottom, 0xff000000u);

    current = (int)ceilf(D_001E6600[index]);
    total = (int)ceilf(D_001E65F8[index]);
    ratio = (float)(u32)current / (float)(u32)total;
    one = 1.0f;
    if (ratio > one)
        ratio = one;
    draw_zero = 0.0f;
    filled = (int)(ratio * (float)(func_0A5990(&rect) - 2));
    if (D_001E6600[index] > draw_zero && filled < 2)
        filled = 2;

    func_0A97F0(one, one,
                 (short)((unsigned short)rect.x + 1), (short)rect.y,
                 (short)((unsigned short)rect.x + filled), (short)rect.bottom,
                 0xff09a5d0u, 0xff1c35ffu, 0xff09a5d0u, 0xff1c35ffu, draw_zero);
    if (D_001E65F8[index] < 100.0f)
        func_0A9760((short)((unsigned short)rect.x + filled),
                     (short)rect.y, (short)rect.right,
                     (short)rect.bottom, 0x20000000u);

    func_0AB9B8(0x45, &rect, draw_zero);
    manager = &D_0021C8C0;
    func_0A5F50(input->field_18);
    if (manager) {
        sprintf(text, D_001FBD68, current, total);
        if (manager->progress >= 100.0f)
            func_0A7CF8((short)func_0A5930(&rect), (short)rect.bottom,
                         text, 0.9f, 0.9f);
        else
            func_0A7A40((short)func_0A5930(&rect), (short)rect.bottom, text);
    }
    func_0AB9B8(0x46, &rect, draw_zero);
    if (manager) {
        sprintf(text, D_001FBD58, D_001E65C8[index]);
        func_0A8150((short)rect.right, (short)rect.bottom, text);
    }
}
