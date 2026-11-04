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

extern float D_00151480[];
extern float D_00151478[];
extern char D_001668E8[];
extern UiManager D_0017D2C0;

extern void *func_095420(int kind);
extern void func_089748(int index, void *value);
extern void func_08F370(int id, u32 color, float zero);
extern int func_08EFD0(int id, void *out, float zero);
extern void func_08FCC8(int id, int a, int b, int c, u32 field,
                        float x, float y, float z, float w);
extern void func_08CD78(int x, int y, int right, int bottom, u32 color);
extern float ceilf(float value);
extern int func_088FA8(const void *rect);
extern void func_08CE08(float xscale, float yscale,
                        int x, int y, int right, int bottom,
                        u32 c0, u32 c1, u32 c2, u32 c3, float zero);
extern void func_089568(u32 value);
extern int sprintf(char *dst, const char *format, ...);
extern int func_088F48(const void *rect);
extern void func_08B058(int x, int bottom, char *text);

void func_099098(int index, const PanelInput *input)
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

    func_089748(index, func_095420(2));
    func_08F370(0x0c, 0xffffffffu, initial_zero);
    func_08EFD0(0x42, &rect, initial_zero);
    func_08FCC8(0x42, 0, 0, 0, input->field_18,
                 1.0f, 1.0f, initial_zero, initial_zero);

    func_08CD78((short)((unsigned short)rect.x - 1),
                 (short)(rect.y - 2),
                 (short)(rect.right + 1),
                 (short)(rect.bottom + 1), 0xa0202020u);
    func_08CD78(rect.x, (short)rect.y, (short)rect.right,
                 (short)rect.bottom, 0xff000000u);

    current = (int)ceilf(D_00151480[index]);
    total = (int)ceilf(D_00151478[index]);
    ratio = (float)(u32)current / (float)(u32)total;
    limit = 100.0f;
    if (ratio > limit)
        ratio = limit;
    draw_zero = 0.0f;
    filled = (int)(ratio * (float)(func_088FA8(&rect) - 2));
    if (D_00151480[index] > draw_zero && filled < 2)
        filled = 2;

    func_08CE08(1.0f, 1.0f,
                 (short)((unsigned short)rect.x + 1), (short)rect.y,
                 (short)((unsigned short)rect.x + filled), (short)rect.bottom,
                 0xff09a5d0u, 0xff1c35ffu, 0xff09a5d0u, 0xff1c35ffu, draw_zero);
    if (D_00151478[index] < limit)
        func_08CD78((short)((unsigned short)rect.x + filled),
                     (short)rect.y, (short)rect.right,
                     (short)rect.bottom, 0x20000000u);

    func_08EFD0(0x43, &rect, draw_zero);
    if (&D_0017D2C0) {
        sprintf(text, D_001668E8, current, total);
        func_089568(input->field_18);
        func_08B058((short)func_088F48(&rect), (short)rect.bottom, text);
    }
}
