/* LEVEL_01.REL:0x0B6218 -- render a timer with alternating colors. */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    float end;
    float period;
    u32 odd_color;
    u32 even_color;
} TimerBand;

extern u32 D_001FC708;
extern float D_001FC704;
extern u32 D_001EF418;
extern int D_001FC70C;
extern int D_001FC710;
extern void *D_001FC700;
extern u8 D_001FC798;
extern char D_001FC718[];
extern TimerBand D_00212040[];
extern char D_00212020[];
extern char D_00212028[];
extern char D_00212030[];
extern char D_00212038[];
extern char D_00328628[];

extern void func_0A8E80(u32 value, int mode);
extern char *func_1324B0(void *value);
extern void func_0A8CA0(u32 color);
extern void func_0A98C0(short x, short y, char *text);
extern void func_0AA460(float advance, float sx, float sy, short x, short y, char *text);
extern void func_0A9B58(float sx, float sy, short x, short y, char *text);
extern int func_0A9878(void *text);
extern int sprintf(char *dest, const char *format, ...);
extern unsigned int strlen(const char *text);

void func_0B6218(void)
{
    int band;
    int phase;
    float remaining;
    float x;
    float seconds;
    float period;
    int minutes;
    int whole_seconds;
    int hundredths;
    char *text;

    if (D_001FC708 == 0)
        return;

    func_0A8E80(D_001EF418, 0);
    band = 0;
    if (D_001FC704 <= D_00212040[0].end)
        goto band_found;
    {
        TimerBand *at = D_00212040;
        band = 0;
        do {
            band++;
            if (band >= 3)
                break;
            at++;
            if (D_001FC704 <= at->end)
                goto band_found;
        } while (1);
    }
band_found:
    if (band >= 3)
        return;

    remaining = D_001FC704 - 1.0f;
    period = D_00212040[band].period;
    phase = (int)(remaining / period);
    if (D_001FC798 != 0)
        text = D_001FC718;
    else
        text = func_1324B0(D_001FC700);

    func_0A8CA0(((u8)D_001FC708 << 24) | 0xFFFFFF);
    func_0A98C0(*(short *)&D_001FC70C, *(short *)&D_001FC710, text);
    if ((phase & 1) != 0)
        func_0A8CA0((D_00212040[band].odd_color & 0xFFFFFF) | ((u8)D_001FC708 << 24));
    else
        func_0A8CA0((D_00212040[band].even_color & 0xFFFFFF) | ((u8)D_001FC708 << 24));

    x = (float)D_001FC70C;
    minutes = (int)(D_001FC704 / 60.0f);
    seconds = D_001FC704 - (float)(minutes * 60);
    whole_seconds = (int)seconds;
    hundredths = (int)((seconds - (float)whole_seconds) * 100.0f);

    sprintf(D_00328628, D_00212020, minutes);
    func_0AA460(18.0f, 1.5f, 1.5f, (short)(int)x,
                (short)(*(unsigned short *)&D_001FC710 + 19), D_00328628);
    x = x + (float)strlen(D_00328628) * 18.0f + -2.0f;
    func_0A9B58(1.5f, 1.5f, (short)(int)x,
                (short)(*(unsigned short *)&D_001FC710 + 19), D_00212028);
    x = x + (float)func_0A9878(D_00212028);

    sprintf(D_00328628, D_00212030, whole_seconds);
    func_0AA460(18.0f, 1.5f, 1.5f, (short)(int)x,
                (short)(*(unsigned short *)&D_001FC710 + 19), D_00328628);
    x = x + (float)strlen(D_00328628) * 18.0f;
    func_0A9B58(0.97499996f, 0.97499996f, (short)(int)x,
                (short)(*(unsigned short *)&D_001FC710 + 15), D_00212038);

    x = x + 4.0f;
    sprintf(D_00328628, D_00212030, hundredths);
    func_0AA460(11.7f, 0.97499996f, 0.97499996f,
                (short)(int)x,
                (short)(*(unsigned short *)&D_001FC710 + 15), D_00328628);
}
