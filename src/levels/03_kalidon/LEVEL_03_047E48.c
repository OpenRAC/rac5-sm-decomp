/* LEVEL_03:0x047E48 -- placement copy of LEVEL_01_049B88.c: probes a position with a helper and returns a status plus a clamped height. */
extern float D_0024A584;
typedef struct { char pad[12]; unsigned short flags; char pad2[18]; } Tmp;
extern int func_0202D8(float value, float *out, Tmp *tmp, float *in, int size, int zero);

int func_047E48(float param_1, float *param_2, float *param_3)
{
    float in[3];
    Tmp tmp;
    float out[4];
    float height;
    int result;
    unsigned char hit;

    in[0] = param_3[0];
    in[1] = param_3[1] + param_1;
    in[2] = param_3[2];
    hit = func_0202D8(in[1] - D_0024A584, out, &tmp, in, 0x78, 0);
    if (hit != 0) {
        *param_2 = out[0] - param_1;
        if (tmp.flags & 1) {
            return 5;
        }
        return 0;
    }
    *param_2 = 1000.0f;
    return 1;
}
