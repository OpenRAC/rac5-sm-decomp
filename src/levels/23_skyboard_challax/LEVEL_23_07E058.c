/* LEVEL_23.REL:0x07E058 -- negates the record's +0x30 float when the probe
   func_027F60(4) answers non zero, and returns it unchanged otherwise. */
typedef struct {
    unsigned char pad0[0x30];
    float v_30;
} Rec;

extern int func_027F60(int which);

float func_07E058(Rec *a0)
{
    if (func_027F60(4)) {
        return -a0->v_30;
    }
    return a0->v_30;
}
