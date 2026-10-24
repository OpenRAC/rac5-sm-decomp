/* LEVEL_03.REL:0x001A60 -- dispatches on the record's +0x10 mode: mode 0
   forwards the scale and the +0x4 rate to func_001968, mode 1 integrates the
   scale times that rate into +0x0. */
typedef struct {
    float v_0;
    float v_4;
    unsigned char pad0[8];
    int mode_10;
} Rec;

extern void func_001968(Rec *a0, float scale, float rate);

void func_001A60(Rec *a0, int unused, float scale)
{
    switch (a0->mode_10) {
    case 0:
        func_001968(a0, scale, a0->v_4);
        break;
    case 1:
        a0->v_0 = a0->v_0 + scale * a0->v_4;
        break;
    }
}
