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

extern float D_001ABD00[];
extern float D_001ABCF8[];
extern char D_001C8418[];
extern UiManager D_001E4410;

extern void *func_0A2D40(int kind);
extern void func_096550(int index, void *value);
extern void func_09C1A8(int id, u32 color, float zero);
extern int func_09BE08(int id, void *out, float zero);
extern void func_09CB00(int id, int a, int b, int c, u32 field,
                        float x, float y, float z, float w);
extern void func_099BB0(int x, int y, int right, int bottom, u32 color);
extern float ceilf(float value);
extern int func_095D80(const void *rect);
extern void func_099C40(float xscale, float yscale,
                        int x, int y, int right, int bottom,
                        u32 c0, u32 c1, u32 c2, u32 c3, float zero);
extern void func_096370(u32 value);
extern int sprintf(char *dst, const char *format, ...);
extern int func_095D20(const void *rect);
extern void func_097E90(int x, int bottom, char *text);

void func_0A6A10(int index, const PanelInput *input)
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

    func_096550(index, func_0A2D40(2));
    func_09C1A8(0x0c, 0xffffffffu, initial_zero);
    func_09BE08(0x42, &rect, initial_zero);
    func_09CB00(0x42, 0, 0, 0, input->field_18,
                 1.0f, 1.0f, initial_zero, initial_zero);

    func_099BB0((short)((unsigned short)rect.x - 1),
                 (short)(rect.y - 2),
                 (short)(rect.right + 1),
                 (short)(rect.bottom + 1), 0xa0202020u);
    func_099BB0(rect.x, (short)rect.y, (short)rect.right,
                 (short)rect.bottom, 0xff000000u);

    current = (int)ceilf(D_001ABD00[index]);
    total = (int)ceilf(D_001ABCF8[index]);
    ratio = (float)(u32)current / (float)(u32)total;
    limit = 100.0f;
    if (ratio > limit)
        ratio = limit;
    draw_zero = 0.0f;
    filled = (int)(ratio * (float)(func_095D80(&rect) - 2));
    if (D_001ABD00[index] > draw_zero && filled < 2)
        filled = 2;

    func_099C40(1.0f, 1.0f,
                 (short)((unsigned short)rect.x + 1), (short)rect.y,
                 (short)((unsigned short)rect.x + filled), (short)rect.bottom,
                 0xff09a5d0u, 0xff1c35ffu, 0xff09a5d0u, 0xff1c35ffu, draw_zero);
    if (D_001ABCF8[index] < limit)
        func_099BB0((short)((unsigned short)rect.x + filled),
                     (short)rect.y, (short)rect.right,
                     (short)rect.bottom, 0x20000000u);

    func_09BE08(0x43, &rect, draw_zero);
    if (&D_001E4410) {
        sprintf(text, D_001C8418, current, total);
        func_096370(input->field_18);
        func_097E90((short)func_095D20(&rect), (short)rect.bottom, text);
    }
}
