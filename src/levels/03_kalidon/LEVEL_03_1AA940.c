/* LEVEL_03:0x1AA940 -- placement copy of LEVEL_01_1978D0.c: per-frame step of the fading effect: while the linked target (state +4) exists and is in mode 1 with the flag (bit 3) set in its resource, the object is re-posed from the state; the timer (state +0) then advances by 1/60 and is mirrored into the object (+0, +0x14, +0x28) while the alpha byte (+0x79) drops by 5; a target that left mode 1, or a timer above 0.85, ends the effect. */
struct Mat;
struct Mat43;

extern void func_1AAA40(char *object);
extern void func_07C468(char *object, int flag);
extern void func_126730(struct Mat *o, struct Mat43 *a, struct Mat *b);
extern void func_121EE8(char *a, char *b);

void func_1AA940(char *object)
{
    char *state;
    char *target;
    float t;

    state = *(char **)(object + 0x58);
    target = *(char **)(state + 4);
    if (target != 0) {
        if ((*(unsigned int *)(target + 0x64) & 0xF) != 1) {
            func_1AAA40(object);
            func_07C468(object, 1);
            return;
        }
        if ((*(unsigned int *)(*(char **)(*(char **)(target + 0x40) + 0x10) + 0x3C) & 8) != 0) {
            func_126730((struct Mat *)object, (struct Mat43 *)(state + 0x38), (struct Mat *)target);
            func_121EE8(state + 8, *(char **)(state + 4));
        }
    }
    *(float *)state = *(float *)state + 0.016666668f;
    *(float *)object = *(float *)state;
    *(float *)(object + 0x14) = *(float *)state;
    t = *(float *)state;
    *(unsigned char *)(object + 0x79) = *(unsigned char *)(object + 0x79) + 0xFB;
    *(float *)(object + 0x28) = t;
    if (0.85f < *(float *)state) {
        func_1AAA40(object);
        func_07C468(object, 1);
    }
}
