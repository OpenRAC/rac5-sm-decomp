/* USA LEVEL_10.REL:0x1AA218, 324-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 6 differing words; first difference at 0xDC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float D_00234298;

extern int func_07D4C0(void *a0);
extern float func_07D0C0(void *a0);
extern void func_07D358(void *a0, int a1, int a2, int a3, float f12, float f13);

void func_1AA218(char *obj)
{
    char *st;
    int code;
    int cur;
    float dot;
    float dot2;

    st = *(char **)(obj + 0x58);
    if (func_07D4C0(obj) != 0) {
        return;
    }
    dot = *(float *)(obj + 0x20) * *(float *)(st + 0x70) + *(float *)(obj + 0x28) * *(float *)(st + 0x74);
    if (dot >= 0.70710677f) {
        code = 5;
    } else if (dot <= -0.70710677f) {
        code = 0xB;
    } else {
        dot2 = *(float *)obj * *(float *)(st + 0x70) + *(float *)(obj + 8) * *(float *)(st + 0x74);
        if (dot2 > 0.0f) {
            code = 9;
        } else {
            code = 0xA;
        }
    }
    cur = *(unsigned char *)(st + 0x6B);
    if (code == cur) {
        return;
    }
    if (cur != 5 && cur != 0xB && cur != 9 && cur != 0xA) {
        *(unsigned char *)(st + 0x6B) = code;
        func_07D358(obj, *(unsigned char *)(st + 0x6B), 0, 1, D_00234298, 0.0f);
    } else {
        float t = func_07D0C0(obj);
        *(unsigned char *)(st + 0x6B) = code;
        func_07D358(obj, *(unsigned char *)(st + 0x6B), 1, 1, D_00234298, t);
    }
}
