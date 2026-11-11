/* Provisional progress-panel variant shared across level modules. */
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

extern float D_001FC800[];
extern float D_001FC7F8[];
extern char D_00212168[];
extern UiManager D_00235140;

extern void *func_0B4E68(int kind);
extern void func_0A8E80(int index, void *value);
extern void func_0AEAA8(int id, u32 color, float zero);
extern int func_0AE708(int id, void *out, float zero);
extern void func_0AF400(int id, int a, int b, int c, u32 field,
                        float x, float y, float z, float w);
extern void func_0AC4B0(int x, int y, int right, int bottom, u32 color);
extern float ceilf(float value);
extern int func_0A86E0(const void *rect);
extern void func_0AC540(float xscale, float yscale,
                        int x, int y, int right, int bottom,
                        u32 c0, u32 c1, u32 c2, u32 c3, float zero);
extern void func_0A8CA0(u32 value);
extern int sprintf(char *dst, const char *format, ...);
extern int func_0A8680(const void *rect);
extern void func_0AA790(int x, int bottom, char *text);

void func_0B89F8(int index, const PanelInput *input)
{
    UiRect rect;
    char text[64];
    float initial_zero = 0.0f;
    float limit;
    float draw_zero;
    int current;
    int total;
    int filled;
    float ratio;

    func_0A8E80(index, func_0B4E68(2));
    func_0AEAA8(0x0c, 0xffffffffu, initial_zero);
    func_0AE708(0x42, &rect, initial_zero);
    func_0AF400(0x42, 0, 0, 0, input->field_18,
                 1.0f, 1.0f, initial_zero, initial_zero);

    func_0AC4B0((short)((unsigned short)rect.x - 1),
                 (short)(rect.y - 2),
                 (short)(rect.right + 1),
                 (short)(rect.bottom + 1), 0xa0202020u);
    func_0AC4B0(rect.x, (short)rect.y, (short)rect.right,
                 (short)rect.bottom, 0xff000000u);

    current = (int)ceilf(D_001FC800[index]);
    total = (int)ceilf(D_001FC7F8[index]);
    ratio = (float)(u32)current / (float)(u32)total;
    limit = 100.0f;
    if (ratio > limit)
        ratio = limit;
    draw_zero = 0.0f;
    filled = (int)(ratio * (float)(func_0A86E0(&rect) - 2));
    if (D_001FC800[index] > draw_zero && filled < 2)
        filled = 2;

    func_0AC540(1.0f, 1.0f,
                 (short)((unsigned short)rect.x + 1), (short)rect.y,
                 (short)((unsigned short)rect.x + filled), (short)rect.bottom,
                 0xff09a5d0u, 0xff1c35ffu, 0xff09a5d0u, 0xff1c35ffu, draw_zero);
    if (D_001FC7F8[index] < limit)
        func_0AC4B0((short)((unsigned short)rect.x + filled),
                     (short)rect.y, (short)rect.right,
                     (short)rect.bottom, 0x20000000u);

    func_0AE708(0x43, &rect, draw_zero);
    if (&D_00235140) {
        sprintf(text, D_00212168, current, total);
        func_0A8CA0(input->field_18);
        func_0AA790((short)func_0A8680(&rect), (short)rect.bottom, text);
    }
}
