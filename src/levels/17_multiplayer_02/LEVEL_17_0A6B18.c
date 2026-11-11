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

extern float D_0019DE80[];
extern float D_0019DE78[];
extern int D_0019DE48[];
extern char D_001BA318[];
extern char D_001BA308[];
extern UiManager D_001D5390;

extern void *func_0A3228(int kind);
extern void func_096A38(int index, void *value);
extern void func_09C690(int id, u32 color, float zero);
extern int func_09C2F0(int id, void *out, float zero);
extern void func_09CFE8(int id, int a, int b, int c, u32 field,
                        float x, float y, float z, float w);
extern void func_09A098(int x, int y, int right, int bottom, u32 color);
extern float ceilf(float value);
extern int func_096268(const void *rect);
extern void func_09A128(float xscale, float yscale,
                        int x, int y, int right, int bottom,
                        u32 c0, u32 c1, u32 c2, u32 c3, float zero);
extern void func_096858(u32 value);
extern int sprintf(char *dst, const char *format, ...);
extern int func_096208(const void *rect);
extern void func_098630(int x, int bottom, char *text, float sx, float sy);
extern void func_098378(int x, int bottom, char *text);
extern void func_098A88(int x, int bottom, char *text);

void func_0A6B18(int index, const PanelInput *input)
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

    func_096A38(index, func_0A3228(2));
    func_09C690(0x0d, 0xffffffffu, initial_zero);
    func_09C690(0x0e, 0xffffffffu, initial_zero);
    func_09C2F0(0x44, &rect, initial_zero);
    func_09CFE8(0x44, 0, 0, 0, input->field_18,
                 1.0f, 1.0f, initial_zero, initial_zero);

    func_09A098((short)((unsigned short)rect.x - 1),
                 (short)(rect.y - 2),
                 (short)(rect.right + 1),
                 (short)(rect.bottom + 1), 0xa0202020u);
    func_09A098(rect.x, (short)rect.y, (short)rect.right,
                 (short)rect.bottom, 0xff000000u);

    current = (int)ceilf(D_0019DE80[index]);
    total = (int)ceilf(D_0019DE78[index]);
    ratio = (float)(u32)current / (float)(u32)total;
    one = 1.0f;
    if (ratio > one)
        ratio = one;
    draw_zero = 0.0f;
    filled = (int)(ratio * (float)(func_096268(&rect) - 2));
    if (D_0019DE80[index] > draw_zero && filled < 2)
        filled = 2;

    func_09A128(one, one,
                 (short)((unsigned short)rect.x + 1), (short)rect.y,
                 (short)((unsigned short)rect.x + filled), (short)rect.bottom,
                 0xff09a5d0u, 0xff1c35ffu, 0xff09a5d0u, 0xff1c35ffu, draw_zero);
    if (D_0019DE78[index] < 100.0f)
        func_09A098((short)((unsigned short)rect.x + filled),
                     (short)rect.y, (short)rect.right,
                     (short)rect.bottom, 0x20000000u);

    func_09C2F0(0x45, &rect, draw_zero);
    manager = &D_001D5390;
    func_096858(input->field_18);
    if (manager) {
        sprintf(text, D_001BA318, current, total);
        if (manager->progress >= 100.0f)
            func_098630((short)func_096208(&rect), (short)rect.bottom,
                         text, 0.9f, 0.9f);
        else
            func_098378((short)func_096208(&rect), (short)rect.bottom, text);
    }
    func_09C2F0(0x46, &rect, draw_zero);
    if (manager) {
        sprintf(text, D_001BA308, D_0019DE48[index]);
        func_098A88((short)rect.right, (short)rect.bottom, text);
    }
}
