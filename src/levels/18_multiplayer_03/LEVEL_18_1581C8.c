/* LEVEL_18:0x1581C8 -- resets an object's blend state, picking a table entry or starting a timed effect. */
typedef struct C {
    char pad0[0xFC];
    unsigned char bFC;
} C;
typedef struct S {
    char pad0[4];
    C *f4;
    char pad8[8];
    float f10;
    float f14;
    char pad18[4];
    float f1C;
    float f20;
    char pad24[0xC];
    int f30;
    char pad34[0xC];
    unsigned char b40;
    unsigned char b41;
    unsigned char b42;
} S;
typedef struct O {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x12];
    S *f58;
} O;
extern const float D_001D5F50[];
extern void func_11CA18(int a, float b, float c);

void func_1581C8(O *o)
{
    S *s;
    s = o->f58;
    s->f14 = s->f10;
    if (s->b40 == 0xFF) {
        if (s->f4) {
            s->b41 = s->f4->bFC;
            s->f10 = D_001D5F50[s->b41];
        } else {
            s->b41 = 0;
            s->f10 = D_001D5F50[0];
        }
    } else {
        func_11CA18(s->f30, (float)s->b40 * 1000.0f + 1.0f, 2.0f);
        s->b41 = 0xFF;
        s->f10 = 0;
    }
    s->f1C = 0;
    s->f20 = 0;
    s->b42 = 0;
    o->b45 = 1;
}
