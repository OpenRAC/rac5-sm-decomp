/* LEVEL_23:0x12ACE8 -- placement copy of LEVEL_01_1395A0.c: per-frame tick of the object's countdown (+0x70): clears the state word at +0xE0, then either (timer expired and no pending flag/word) runs the expiry routine, or decrements the timer by one, steps the byte counter at +0xF5 down to zero and runs one of two updates by the flag at +0xED. */
extern void func_12D7A8(char *object, char *state);
extern void func_12B500(char *object, char *state);
extern void func_12AF20(char *object, char *state);

void func_12ACE8(char *object)
{
    char *state;

    state = *(char **)(object + 0x58);
    *(int *)(state + 0xE0) = 0;
    if (*(float *)(object + 0x70) <= 0.0f && (*(unsigned char *)(state + 0xF2) == 0 || *(int *)(state + 0x6C) == 0)) {
        func_12D7A8(object, state);
    } else {
        *(float *)(object + 0x70) = *(float *)(object + 0x70) - 1.0f;
        if (*(unsigned char *)(state + 0xF5) != 0) {
            *(unsigned char *)(state + 0xF5) = *(unsigned char *)(state + 0xF5) - 1;
        }
        if (*(unsigned char *)(state + 0xED) != 0) {
            func_12B500(object, state);
        } else {
            func_12AF20(object, state);
        }
    }
}
